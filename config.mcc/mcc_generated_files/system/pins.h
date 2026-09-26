/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.1
*/

/*
© [2026] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RB0 aliases
#define IO_RB0_TRIS                 TRISBbits.TRISB0
#define IO_RB0_LAT                  LATBbits.LATB0
#define IO_RB0_PORT                 PORTBbits.RB0
#define IO_RB0_WPU                  WPUBbits.WPUB0
#define IO_RB0_OD                   ODCONBbits.
#define IO_RB0_ANS                  ANSELBbits.ANSEL10
#define IO_RB0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define IO_RB0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define IO_RB0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define IO_RB0_GetValue()           PORTBbits.RB0
#define IO_RB0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define IO_RB0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define IO_RB0_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define IO_RB0_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define IO_RB0_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define IO_RB0_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define IO_RB0_SetAnalogMode()      do { ANSELBbits.ANSEL10 = 1; } while(0)
#define IO_RB0_SetDigitalMode()     do { ANSELBbits.ANSEL10 = 0; } while(0)

// get/set RB1 aliases
#define IO_RB1_TRIS                 TRISBbits.TRISB1
#define IO_RB1_LAT                  LATBbits.LATB1
#define IO_RB1_PORT                 PORTBbits.RB1
#define IO_RB1_WPU                  WPUBbits.WPUB1
#define IO_RB1_OD                   ODCONBbits.
#define IO_RB1_ANS                  ANSELBbits.ANSEL8
#define IO_RB1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define IO_RB1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define IO_RB1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define IO_RB1_GetValue()           PORTBbits.RB1
#define IO_RB1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define IO_RB1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define IO_RB1_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define IO_RB1_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define IO_RB1_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define IO_RB1_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define IO_RB1_SetAnalogMode()      do { ANSELBbits.ANSEL8 = 1; } while(0)
#define IO_RB1_SetDigitalMode()     do { ANSELBbits.ANSEL8 = 0; } while(0)

// get/set RB2 aliases
#define IO_RB2_TRIS                 TRISBbits.TRISB2
#define IO_RB2_LAT                  LATBbits.LATB2
#define IO_RB2_PORT                 PORTBbits.RB2
#define IO_RB2_WPU                  WPUBbits.WPUB2
#define IO_RB2_OD                   ODCONBbits.
#define IO_RB2_ANS                  ANSELBbits.
#define IO_RB2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define IO_RB2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define IO_RB2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define IO_RB2_GetValue()           PORTBbits.RB2
#define IO_RB2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define IO_RB2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define IO_RB2_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define IO_RB2_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define IO_RB2_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define IO_RB2_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define IO_RB2_SetAnalogMode()      do { ANSELBbits. = 1; } while(0)
#define IO_RB2_SetDigitalMode()     do { ANSELBbits. = 0; } while(0)

// get/set RB3 aliases
#define IO_RB3_TRIS                 TRISBbits.TRISB3
#define IO_RB3_LAT                  LATBbits.LATB3
#define IO_RB3_PORT                 PORTBbits.RB3
#define IO_RB3_WPU                  WPUBbits.WPUB3
#define IO_RB3_OD                   ODCONBbits.
#define IO_RB3_ANS                  ANSELBbits.
#define IO_RB3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define IO_RB3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define IO_RB3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define IO_RB3_GetValue()           PORTBbits.RB3
#define IO_RB3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define IO_RB3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define IO_RB3_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define IO_RB3_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define IO_RB3_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define IO_RB3_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define IO_RB3_SetAnalogMode()      do { ANSELBbits. = 1; } while(0)
#define IO_RB3_SetDigitalMode()     do { ANSELBbits. = 0; } while(0)

// get/set RB4 aliases
#define IO_RB4_TRIS                 TRISBbits.TRISB4
#define IO_RB4_LAT                  LATBbits.LATB4
#define IO_RB4_PORT                 PORTBbits.RB4
#define IO_RB4_WPU                  WPUBbits.WPUB4
#define IO_RB4_OD                   ODCONBbits.
#define IO_RB4_ANS                  ANSELBbits.ANSEL9
#define IO_RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define IO_RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define IO_RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define IO_RB4_GetValue()           PORTBbits.RB4
#define IO_RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define IO_RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define IO_RB4_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define IO_RB4_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define IO_RB4_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define IO_RB4_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define IO_RB4_SetAnalogMode()      do { ANSELBbits.ANSEL9 = 1; } while(0)
#define IO_RB4_SetDigitalMode()     do { ANSELBbits.ANSEL9 = 0; } while(0)

// get/set RB5 aliases
#define IO_RB5_TRIS                 TRISBbits.TRISB5
#define IO_RB5_LAT                  LATBbits.LATB5
#define IO_RB5_PORT                 PORTBbits.RB5
#define IO_RB5_WPU                  WPUBbits.WPUB5
#define IO_RB5_OD                   ODCONBbits.
#define IO_RB5_ANS                  ANSELBbits.
#define IO_RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define IO_RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define IO_RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define IO_RB5_GetValue()           PORTBbits.RB5
#define IO_RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define IO_RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define IO_RB5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define IO_RB5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define IO_RB5_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define IO_RB5_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define IO_RB5_SetAnalogMode()      do { ANSELBbits. = 1; } while(0)
#define IO_RB5_SetDigitalMode()     do { ANSELBbits. = 0; } while(0)

// get/set RB6 aliases
#define IO_RB6_TRIS                 TRISBbits.TRISB6
#define IO_RB6_LAT                  LATBbits.LATB6
#define IO_RB6_PORT                 PORTBbits.RB6
#define IO_RB6_WPU                  WPUBbits.WPUB6
#define IO_RB6_OD                   ODCONBbits.
#define IO_RB6_ANS                  ANSELBbits.
#define IO_RB6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define IO_RB6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define IO_RB6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define IO_RB6_GetValue()           PORTBbits.RB6
#define IO_RB6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define IO_RB6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define IO_RB6_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define IO_RB6_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define IO_RB6_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define IO_RB6_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define IO_RB6_SetAnalogMode()      do { ANSELBbits. = 1; } while(0)
#define IO_RB6_SetDigitalMode()     do { ANSELBbits. = 0; } while(0)

// get/set RC0 aliases
#define AB_TRIS                 TRISCbits.TRISC0
#define AB_LAT                  LATCbits.LATC0
#define AB_PORT                 PORTCbits.RC0
#define AB_WPU                  WPUCbits.
#define AB_OD                   ODCONCbits.
#define AB_ANS                  ANSELCbits.
#define AB_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define AB_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define AB_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define AB_GetValue()           PORTCbits.RC0
#define AB_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define AB_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define AB_SetPullup()          do { WPUCbits. = 1; } while(0)
#define AB_ResetPullup()        do { WPUCbits. = 0; } while(0)
#define AB_SetPushPull()        do { ODCONCbits. = 0; } while(0)
#define AB_SetOpenDrain()       do { ODCONCbits. = 1; } while(0)
#define AB_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define AB_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RC1 aliases
#define CLK_TRIS                 TRISCbits.TRISC1
#define CLK_LAT                  LATCbits.LATC1
#define CLK_PORT                 PORTCbits.RC1
#define CLK_WPU                  WPUCbits.
#define CLK_OD                   ODCONCbits.
#define CLK_ANS                  ANSELCbits.
#define CLK_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define CLK_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define CLK_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define CLK_GetValue()           PORTCbits.RC1
#define CLK_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define CLK_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define CLK_SetPullup()          do { WPUCbits. = 1; } while(0)
#define CLK_ResetPullup()        do { WPUCbits. = 0; } while(0)
#define CLK_SetPushPull()        do { ODCONCbits. = 0; } while(0)
#define CLK_SetOpenDrain()       do { ODCONCbits. = 1; } while(0)
#define CLK_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define CLK_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RC2 aliases
#define MR_TRIS                 TRISCbits.TRISC2
#define MR_LAT                  LATCbits.LATC2
#define MR_PORT                 PORTCbits.RC2
#define MR_WPU                  WPUCbits.
#define MR_OD                   ODCONCbits.
#define MR_ANS                  ANSELCbits.
#define MR_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define MR_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define MR_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define MR_GetValue()           PORTCbits.RC2
#define MR_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define MR_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define MR_SetPullup()          do { WPUCbits. = 1; } while(0)
#define MR_ResetPullup()        do { WPUCbits. = 0; } while(0)
#define MR_SetPushPull()        do { ODCONCbits. = 0; } while(0)
#define MR_SetOpenDrain()       do { ODCONCbits. = 1; } while(0)
#define MR_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define MR_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/