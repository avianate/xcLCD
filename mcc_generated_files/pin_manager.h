/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.15
        Device            :  PIC16F1619
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED5 aliases
#define LED5_TRIS               TRISAbits.TRISA1
#define LED5_LAT                LATAbits.LATA1
#define LED5_PORT               PORTAbits.RA1
#define LED5_WPU                WPUAbits.WPUA1
#define LED5_OD                ODCONAbits.ODA1
#define LED5_ANS                ANSELAbits.ANSA1
#define LED5_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LED5_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LED5_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LED5_GetValue()           PORTAbits.RA1
#define LED5_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LED5_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LED5_SetPullup()      do { WPUAbits.WPUA1 = 1; } while(0)
#define LED5_ResetPullup()    do { WPUAbits.WPUA1 = 0; } while(0)
#define LED5_SetPushPull()    do { ODCONAbits.ODA1 = 1; } while(0)
#define LED5_SetOpenDrain()   do { ODCONAbits.ODA1 = 0; } while(0)
#define LED5_SetAnalogMode()  do { ANSELAbits.ANSA1 = 1; } while(0)
#define LED5_SetDigitalMode() do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set LED6 aliases
#define LED6_TRIS               TRISAbits.TRISA2
#define LED6_LAT                LATAbits.LATA2
#define LED6_PORT               PORTAbits.RA2
#define LED6_WPU                WPUAbits.WPUA2
#define LED6_OD                ODCONAbits.ODA2
#define LED6_ANS                ANSELAbits.ANSA2
#define LED6_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED6_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED6_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED6_GetValue()           PORTAbits.RA2
#define LED6_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED6_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED6_SetPullup()      do { WPUAbits.WPUA2 = 1; } while(0)
#define LED6_ResetPullup()    do { WPUAbits.WPUA2 = 0; } while(0)
#define LED6_SetPushPull()    do { ODCONAbits.ODA2 = 1; } while(0)
#define LED6_SetOpenDrain()   do { ODCONAbits.ODA2 = 0; } while(0)
#define LED6_SetAnalogMode()  do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED6_SetDigitalMode() do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set LED4 aliases
#define LED4_TRIS               TRISAbits.TRISA5
#define LED4_LAT                LATAbits.LATA5
#define LED4_PORT               PORTAbits.RA5
#define LED4_WPU                WPUAbits.WPUA5
#define LED4_OD                ODCONAbits.ODA5
#define LED4_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LED4_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LED4_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LED4_GetValue()           PORTAbits.RA5
#define LED4_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LED4_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LED4_SetPullup()      do { WPUAbits.WPUA5 = 1; } while(0)
#define LED4_ResetPullup()    do { WPUAbits.WPUA5 = 0; } while(0)
#define LED4_SetPushPull()    do { ODCONAbits.ODA5 = 1; } while(0)
#define LED4_SetOpenDrain()   do { ODCONAbits.ODA5 = 0; } while(0)

// get/set LCD4 aliases
#define LCD4_TRIS               TRISBbits.TRISB4
#define LCD4_LAT                LATBbits.LATB4
#define LCD4_PORT               PORTBbits.RB4
#define LCD4_WPU                WPUBbits.WPUB4
#define LCD4_OD                ODCONBbits.ODB4
#define LCD4_ANS                ANSELBbits.ANSB4
#define LCD4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define LCD4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define LCD4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define LCD4_GetValue()           PORTBbits.RB4
#define LCD4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define LCD4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define LCD4_SetPullup()      do { WPUBbits.WPUB4 = 1; } while(0)
#define LCD4_ResetPullup()    do { WPUBbits.WPUB4 = 0; } while(0)
#define LCD4_SetPushPull()    do { ODCONBbits.ODB4 = 1; } while(0)
#define LCD4_SetOpenDrain()   do { ODCONBbits.ODB4 = 0; } while(0)
#define LCD4_SetAnalogMode()  do { ANSELBbits.ANSB4 = 1; } while(0)
#define LCD4_SetDigitalMode() do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set LCD5 aliases
#define LCD5_TRIS               TRISBbits.TRISB5
#define LCD5_LAT                LATBbits.LATB5
#define LCD5_PORT               PORTBbits.RB5
#define LCD5_WPU                WPUBbits.WPUB5
#define LCD5_OD                ODCONBbits.ODB5
#define LCD5_ANS                ANSELBbits.ANSB5
#define LCD5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define LCD5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define LCD5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define LCD5_GetValue()           PORTBbits.RB5
#define LCD5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define LCD5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define LCD5_SetPullup()      do { WPUBbits.WPUB5 = 1; } while(0)
#define LCD5_ResetPullup()    do { WPUBbits.WPUB5 = 0; } while(0)
#define LCD5_SetPushPull()    do { ODCONBbits.ODB5 = 1; } while(0)
#define LCD5_SetOpenDrain()   do { ODCONBbits.ODB5 = 0; } while(0)
#define LCD5_SetAnalogMode()  do { ANSELBbits.ANSB5 = 1; } while(0)
#define LCD5_SetDigitalMode() do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set LCD6 aliases
#define LCD6_TRIS               TRISBbits.TRISB6
#define LCD6_LAT                LATBbits.LATB6
#define LCD6_PORT               PORTBbits.RB6
#define LCD6_WPU                WPUBbits.WPUB6
#define LCD6_OD                ODCONBbits.ODB6
#define LCD6_ANS                ANSELBbits.ANSB6
#define LCD6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define LCD6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define LCD6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define LCD6_GetValue()           PORTBbits.RB6
#define LCD6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define LCD6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define LCD6_SetPullup()      do { WPUBbits.WPUB6 = 1; } while(0)
#define LCD6_ResetPullup()    do { WPUBbits.WPUB6 = 0; } while(0)
#define LCD6_SetPushPull()    do { ODCONBbits.ODB6 = 1; } while(0)
#define LCD6_SetOpenDrain()   do { ODCONBbits.ODB6 = 0; } while(0)
#define LCD6_SetAnalogMode()  do { ANSELBbits.ANSB6 = 1; } while(0)
#define LCD6_SetDigitalMode() do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set LCD7 aliases
#define LCD7_TRIS               TRISBbits.TRISB7
#define LCD7_LAT                LATBbits.LATB7
#define LCD7_PORT               PORTBbits.RB7
#define LCD7_WPU                WPUBbits.WPUB7
#define LCD7_OD                ODCONBbits.ODB7
#define LCD7_ANS                ANSELBbits.ANSB7
#define LCD7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define LCD7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define LCD7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define LCD7_GetValue()           PORTBbits.RB7
#define LCD7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define LCD7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define LCD7_SetPullup()      do { WPUBbits.WPUB7 = 1; } while(0)
#define LCD7_ResetPullup()    do { WPUBbits.WPUB7 = 0; } while(0)
#define LCD7_SetPushPull()    do { ODCONBbits.ODB7 = 1; } while(0)
#define LCD7_SetOpenDrain()   do { ODCONBbits.ODB7 = 0; } while(0)
#define LCD7_SetAnalogMode()  do { ANSELBbits.ANSB7 = 1; } while(0)
#define LCD7_SetDigitalMode() do { ANSELBbits.ANSB7 = 0; } while(0)

// get/set POT1 aliases
#define POT1_TRIS               TRISCbits.TRISC0
#define POT1_LAT                LATCbits.LATC0
#define POT1_PORT               PORTCbits.RC0
#define POT1_WPU                WPUCbits.WPUC0
#define POT1_OD                ODCONCbits.ODC0
#define POT1_ANS                ANSELCbits.ANSC0
#define POT1_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define POT1_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define POT1_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define POT1_GetValue()           PORTCbits.RC0
#define POT1_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define POT1_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define POT1_SetPullup()      do { WPUCbits.WPUC0 = 1; } while(0)
#define POT1_ResetPullup()    do { WPUCbits.WPUC0 = 0; } while(0)
#define POT1_SetPushPull()    do { ODCONCbits.ODC0 = 1; } while(0)
#define POT1_SetOpenDrain()   do { ODCONCbits.ODC0 = 0; } while(0)
#define POT1_SetAnalogMode()  do { ANSELCbits.ANSC0 = 1; } while(0)
#define POT1_SetDigitalMode() do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set mTouch aliases
#define mTouch_TRIS               TRISCbits.TRISC1
#define mTouch_LAT                LATCbits.LATC1
#define mTouch_PORT               PORTCbits.RC1
#define mTouch_WPU                WPUCbits.WPUC1
#define mTouch_OD                ODCONCbits.ODC1
#define mTouch_ANS                ANSELCbits.ANSC1
#define mTouch_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define mTouch_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define mTouch_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define mTouch_GetValue()           PORTCbits.RC1
#define mTouch_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define mTouch_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define mTouch_SetPullup()      do { WPUCbits.WPUC1 = 1; } while(0)
#define mTouch_ResetPullup()    do { WPUCbits.WPUC1 = 0; } while(0)
#define mTouch_SetPushPull()    do { ODCONCbits.ODC1 = 1; } while(0)
#define mTouch_SetOpenDrain()   do { ODCONCbits.ODC1 = 0; } while(0)
#define mTouch_SetAnalogMode()  do { ANSELCbits.ANSC1 = 1; } while(0)
#define mTouch_SetDigitalMode() do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set S1 aliases
#define S1_TRIS               TRISCbits.TRISC4
#define S1_LAT                LATCbits.LATC4
#define S1_PORT               PORTCbits.RC4
#define S1_WPU                WPUCbits.WPUC4
#define S1_OD                ODCONCbits.ODC4
#define S1_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define S1_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define S1_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define S1_GetValue()           PORTCbits.RC4
#define S1_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define S1_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define S1_SetPullup()      do { WPUCbits.WPUC4 = 1; } while(0)
#define S1_ResetPullup()    do { WPUCbits.WPUC4 = 0; } while(0)
#define S1_SetPushPull()    do { ODCONCbits.ODC4 = 1; } while(0)
#define S1_SetOpenDrain()   do { ODCONCbits.ODC4 = 0; } while(0)

// get/set LED7 aliases
#define LED7_TRIS               TRISCbits.TRISC5
#define LED7_LAT                LATCbits.LATC5
#define LED7_PORT               PORTCbits.RC5
#define LED7_WPU                WPUCbits.WPUC5
#define LED7_OD                ODCONCbits.ODC5
#define LED7_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define LED7_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define LED7_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define LED7_GetValue()           PORTCbits.RC5
#define LED7_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define LED7_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define LED7_SetPullup()      do { WPUCbits.WPUC5 = 1; } while(0)
#define LED7_ResetPullup()    do { WPUCbits.WPUC5 = 0; } while(0)
#define LED7_SetPushPull()    do { ODCONCbits.ODC5 = 1; } while(0)
#define LED7_SetOpenDrain()   do { ODCONCbits.ODC5 = 0; } while(0)

// get/set E aliases
#define E_TRIS               TRISCbits.TRISC6
#define E_LAT                LATCbits.LATC6
#define E_PORT               PORTCbits.RC6
#define E_WPU                WPUCbits.WPUC6
#define E_OD                ODCONCbits.ODC6
#define E_ANS                ANSELCbits.ANSC6
#define E_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define E_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define E_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define E_GetValue()           PORTCbits.RC6
#define E_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define E_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define E_SetPullup()      do { WPUCbits.WPUC6 = 1; } while(0)
#define E_ResetPullup()    do { WPUCbits.WPUC6 = 0; } while(0)
#define E_SetPushPull()    do { ODCONCbits.ODC6 = 1; } while(0)
#define E_SetOpenDrain()   do { ODCONCbits.ODC6 = 0; } while(0)
#define E_SetAnalogMode()  do { ANSELCbits.ANSC6 = 1; } while(0)
#define E_SetDigitalMode() do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RS aliases
#define RS_TRIS               TRISCbits.TRISC7
#define RS_LAT                LATCbits.LATC7
#define RS_PORT               PORTCbits.RC7
#define RS_WPU                WPUCbits.WPUC7
#define RS_OD                ODCONCbits.ODC7
#define RS_ANS                ANSELCbits.ANSC7
#define RS_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RS_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RS_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RS_GetValue()           PORTCbits.RC7
#define RS_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RS_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RS_SetPullup()      do { WPUCbits.WPUC7 = 1; } while(0)
#define RS_ResetPullup()    do { WPUCbits.WPUC7 = 0; } while(0)
#define RS_SetPushPull()    do { ODCONCbits.ODC7 = 1; } while(0)
#define RS_SetOpenDrain()   do { ODCONCbits.ODC7 = 0; } while(0)
#define RS_SetAnalogMode()  do { ANSELCbits.ANSC7 = 1; } while(0)
#define RS_SetDigitalMode() do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/