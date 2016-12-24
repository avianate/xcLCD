/* 
 * File:   LCD.c
 * Author: avianate
 *
 * Created on December 22, 2016, 8:07 PM
 */

#include <xc.h>
#include "LCD.h"
#include <string.h>

void LCDInit() 
{
    // clear latches before enabling TRIS bits
    LCD_PORT = 0;
    
    // required by display controller to allow power to stabilize
    __delay_ms(START_DELAY);
    
    // Required function set command at startup
    Optrex4BitStartup();    
     
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

void WriteString(const char *str, bool centerText)
{
    uint8_t i = 0;
    uint8_t j = 0;
    uint8_t leftSpace = 0;
    
    if (centerText) 
    {
        uint8_t length = strlen(str);
        
        if (length <= 16) 
        {
            uint8_t totalSpaces = NUMBER_OF_COLUMNS - strlen(str);
            leftSpace = totalSpaces / 2;
            
            while (j < leftSpace) 
            {
                WriteCharacter(' ');
                j++;
            }
        }
    }
        
    while (str[i])
    {
        WriteCharacter(str[i++]);
    }
}

void WriteNibble(uint8_t nibble, uint8_t rs)
{   
    // always use the upper nibble
    // mask off the lower nibble
    nibble = (nibble & 0xF0);
    
    // clear the upper half of the LCD_PORT
    LCD_PORT = (LCD_PORT & 0x00);
    
    // move the nibble onto the LCD_PORT (PORTB only uses upper nibble)
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

// Required Optrex DMC-16204 4-bit initialization sequence
void Optrex4BitStartup(void) 
{
    uint8_t InitialCommand = 0x33;
    uint8_t SecondCommand = 0x32;
     
    // send upper nibble of first command
    WriteNibble(InitialCommand, instruction);
    
    // get the lower nibble of first command
    InitialCommand = (InitialCommand << 4);
    
    // Wait more than 4.1ms before sending lower nibble
    __delay_ms(LCD_DELAY);
    
    // Send lower nibble of first command
    WriteNibble(InitialCommand, instruction);
    
    __delay_ms(1);
    
    LCDCommand(SecondCommand);
    
    LCDCommand(INTERFACE_MODE);
      
    LCDCommand(SET_DISPLAY);
    
    Clear();
    
    // 4bit interface, 2 lines, 5x8 font
    LCDCommand(INCREMENT_MODE);
    
    // Display off
    Off();
    
    Clear();
    
    LCDCommand(INCREMENT_MODE);
    
    // Display on, cursor off, blink off
    LCDCommand(SET_DISPLAY);
}