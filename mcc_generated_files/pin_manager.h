/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F15313
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED1 aliases
#define LED1_TRIS                 TRISAbits.TRISA1
#define LED1_LAT                  LATAbits.LATA1
#define LED1_PORT                 PORTAbits.RA1
#define LED1_WPU                  WPUAbits.WPUA1
#define LED1_OD                   ODCONAbits.ODCA1
#define LED1_ANS                  ANSELAbits.ANSA1
#define LED1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LED1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LED1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LED1_GetValue()           PORTAbits.RA1
#define LED1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LED1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LED1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define LED1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define LED1_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define LED1_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define LED1_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define LED1_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set LED2 aliases
#define LED2_TRIS                 TRISAbits.TRISA2
#define LED2_LAT                  LATAbits.LATA2
#define LED2_PORT                 PORTAbits.RA2
#define LED2_WPU                  WPUAbits.WPUA2
#define LED2_OD                   ODCONAbits.ODCA2
#define LED2_ANS                  ANSELAbits.ANSA2
#define LED2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED2_GetValue()           PORTAbits.RA2
#define LED2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LED2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LED2_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define LED2_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define LED2_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED2_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set BUTTON aliases
#define BUTTON_TRIS                 TRISAbits.TRISA5
#define BUTTON_LAT                  LATAbits.LATA5
#define BUTTON_PORT                 PORTAbits.RA5
#define BUTTON_WPU                  WPUAbits.WPUA5
#define BUTTON_OD                   ODCONAbits.ODCA5
#define BUTTON_ANS                  ANSELAbits.ANSA5
#define BUTTON_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define BUTTON_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define BUTTON_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define BUTTON_GetValue()           PORTAbits.RA5
#define BUTTON_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define BUTTON_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define BUTTON_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define BUTTON_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define BUTTON_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define BUTTON_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define BUTTON_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define BUTTON_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

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