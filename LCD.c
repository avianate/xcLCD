/* 
 * File:   LCD.c
 * Author: avianate
 *
 * Created on December 22, 2016, 8:07 PM
 */

#include <xc.h>
#include "LCD.h"

void LCDInit() 
{
    // clear latches before enabling TRIS bits
    LCD_PORT = 0;
    
    TRISB = 0x00;
    
    // required by display controller to allow power to stabilize
    __delay_ms(START_DELAY);
    
    LCDCommand(0x32);
    
    LCDCommand(INTERFACE_MODE);
    
    LCDCommand(SET_DISPLAY);
    
    Clear();
    
    LCDCommand(INCREMENT_MODE);
}

void WriteCharacter(uint8_t letter)
{
    __delay_ms(LCD_DELAY);
    
    // send upper nibble
    WriteNibble(letter, data);
    
    // get lower nibble
    letter = (letter << 4);
    
    // Send the lower nibble
    WriteNibble(letter, data);
}

void LCDCommand(uint8_t command)
{
    __delay_ms(LCD_DELAY);
    
    // send upper nibble
    WriteNibble(command, instruction);
    
    // get the lower nibble
    command = (command << 4);
    
    __delay_ms(1);
    
    // Send lower nibble
    WriteNibble(command, instruction);
}

void WriteString(const char *str)
{
    uint8_t i = 0;
    
    while (str[i])
    {
        WriteCharacter(str[i++]);
    }
}

void WriteNibble(uint8_t nibble, uint8_t rs)
{
    // always send the upper nibble
    nibble = (nibble >> 4);
    
    // mask off the nibble to be transmitted
    nibble = (nibble & 0x0F);
    
    // clear the lower half of the LCD_PORT
    LCD_PORT = (LCD_PORT & 0xF0);
    
    // move the nibble onto the LCD_PORT
    LCD_PORT = (LCD_PORT | nibble);
    
    // set data/instruction bit
    // instruction = 0
    // data = 1
    LCD_RS = rs;
       
    // set up enable before sending nibble
    LCD_EN = 1;
    
    // turn of enable after sending nibble
    LCD_EN = 0;
}

void MoveTo(uint8_t line, uint8_t position)
{
    // if incorrect line or column
    if ((line > (NUMBER_OF_LINES)) || (position > (NUMBER_OF_COLUMNS - 1)))
    {
        return;
    }
    
    // LCD goto command
    LCDCommand((line == 1) ? (0xC0 | position) : (0x80 | position));
    
    // wait for LCD
    __delay_ms(LCD_DELAY);
}