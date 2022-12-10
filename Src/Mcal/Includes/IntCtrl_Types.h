/**********************************************************************************************************************
*  FILE DESCRIPTION
*  -------------------------------------------------------------------------------------------------------------------
*         File:  IntCtrl_Types.h
*    Component:  -
*       Module:  -
*
*  Description:  in this Header Define All types used for Ineterrupt
*
*********************************************************************************************************************/
#ifndef INTCTRL_TYPES_H
#define INTCTRL_TYPES_H
/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef enum
{
csIntCtrlGPIOPortA, 
csIntCtrlGPIOPortB,
csIntCtrlGPIOPortC,
csIntCtrlGPIOPortD,
csIntCtrlGPIOPortE,
csIntCtrlUART0,
csIntCtrlUART1,
csIntCtrlSSI0,
csIntCtrlI2C0,
csIntCtrlPWM0Fault,
csIntCtrlPWM0Generator0,
csIntCtrlPWM0Generator1,
csIntCtrlPWM0Generator2,
csIntCtrlQEI0,
csIntCtrlADC0Sequence0,
csIntCtrlADC0Sequence1,
csIntCtrlADC0Sequence2,
csIntCtrlADC0Sequence3,
csIntCtrlWatchdogTimers0_Timer1,
csIntCtrlTimer0A,
csIntCtrlTimer0B,
csIntCtrlTimer1A,
csIntCtrlTimer1B,
csIntCtrlTimer2A,
csIntCtrlTimer2B,
csIntCtrlAnalogComparator0,
csIntCtrlAnalogComparator1,
/*43 27 - Reserved*/
csIntCtrlSystemControl,
csIntCtrlFlashCtrlEEPROMCtrl,
csIntCtrlGPIOPortF,
/*31-32 - Reserved*/
csIntCtrlUART2    = 33,
csIntCtrlSSI1,
csIntCtrlTimer3A,
csIntCtrlTimer3B,
csIntCtrlI2C1,
csIntCtrlQEI1,
csIntCtrlCAN0,
csIntCtrlCAN1,
/*41-42 - Reserved*/
csIntCtrlHibernationModule,
csIntCtrlUSB,
csIntCtrlPWMGenerator3,
csIntCtrlDMASoftware,
csIntCtrlDMAError,
csIntCtrlADC1Sequence0,
csIntCtrlADC1Sequence1,
csIntCtrlADC1Sequence2,
csIntCtrlADC1Sequence3,
/*52-56 - Reserved*/
csIntCtrlSSI2 = 57,
csIntCtrlSSI3,
csIntCtrlUART3,
csIntCtrlUART4,
csIntCtrlUART5,
csIntCtrlUART6,
csIntCtrlUART7,
/*64-67 Reserved*/
csIntCtrlI2C2   = 68,
csIntCtrlI2C3,
csIntCtrlTimer4A,
csIntCtrlTimer4B,
/*72-91 Reserved*/
csIntCtrlTimer5A   = 92,
csIntCtrlTimer5B,
csIntCtrlTimer32_64Bit0A,
csIntCtrlTimer32_64Bit0B,
csIntCtrlTimer32_64Bit1A,
csIntCtrlTimer32_64Bit1B,
csIntCtrlTimer32_64Bit2A,
csIntCtrlTimer32_64Bit2B,
csIntCtrlTimer32_64Bit3A,
csIntCtrlTimer32_64Bit3B,
csIntCtrlTimer32_64Bit4A,
csIntCtrlTimer32_64Bit4B,
csIntCtrlTimer32_64Bit5A,
csIntCtrlTimer32_64Bit5B,
csIntCtrlSystemException,
/*107-133 - Reserved*/
csIntCtrlPWM1Generator0 = 134,
csIntCtrlPWM1Generator1,
csIntCtrlPWM1Generator2,
csIntCtrlPWM1Generator3,
csIntCtrlPWM1Fault
}IntCtrl_InterruptType;


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/



#endif /* INTCTRL_TYPES_H */
/**********************************************************************************************************************
 *  END OF FILE: INTCTRL_TYPES.h
 *********************************************************************************************************************/
