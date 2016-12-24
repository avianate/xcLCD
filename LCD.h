/* 
 * File:   LCD.h
 * Author: avianate
 *
 * Created on December 22, 2016, 8:07 PM
 */

#ifndef LCD_H
#define	LCD_H

#include "mcc_generated_files/mcc.h"
#include <xc.h>

#ifdef	__cplusplus
extern "C" {
#endif

#define LCD_DELAY               5           // ~5ms
#define START_DELAY             16          // ~16ms

#define LCD_CLEAR               0x01
#define LCD_HOME                0x02
#define LCD_LINE2               0xC0
#define LCD_PAN_LEFT            0x18
#define LCD_PAN_RIGHT           0x1C

#define LCD_CURSOR_BACK         0x10
#define LCD_CURSOR_FORWARD      0x14
#define LCD_CURSOR_OFF          0x0C
#define LCD_CURSOR_ON           0x0E
#define LCD_CURSOR_BLINK        0x0F

#define INTERFACE_MODE          0x28        // 4 bit interface 2 lines, 5x8 font
#define INCREMENT_MODE          0x06        // increment mode
#define SET_DISPLAY             0x0C        // display on, cursor off, blink off
#define DISPLAY_OFF             0x08        // display off
    
#define Line1                LCDCommand(LCD_HOME)
#define Line2                LCDCommand(LCD_LINE2)
#define MoveCursor()         LCDCommand(LCD_CURSOR_FORWARD)
#define ShiftCursor()        LCDCommand(LCD_CURSOR_ON)
#define Clear()              LCDCommand(LCD_CLEAR)
#define Off()                LCDCommand(DISPLAY_OFF)

#define data            1
#define instruction     0

#define LCD_PORT    LATB
#define LCD_EN      E_LAT
#define LCD_RS      RS_LAT

#define NUMBER_OF_LINES     2
#define NUMBER_OF_COLUMNS   16

// Functions
void LCDInit(void);

// 4bit initialization routine for Optrex DMC-16204 LCD
void Optrex4BitStartup(void);

// Writes a character at the current cursor position
void WriteCharacter(uint8_t letter);

// Send ASCII command to the LCD in instruction mode
void LCDCommand(uint8_t command);

// Writes string at the current cursor position
void WriteString(const char *, bool centerText);

// Writes the specified nibble to the LCD
void WriteNibble(uint8_t nibble, uint8_t rs);

// Positions cursor at the specific line and position
void MoveTo(uint8_t line, uint8_t position);


#ifdef	__cplusplus
}
#endif

#endif	/* LCD_H */