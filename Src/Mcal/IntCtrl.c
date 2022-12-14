/**********************************************************************************************************************
*  FILE DESCRIPTION
*  -------------------------------------------------------------------------------------------------------------------
*         File:  IntCtrl.c
*    Component:  -
*       Module:  -
*
*  Description:  this module is used for initalize NVIC
*
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "IntCtrl.h"
#include "Mcu_Hw.h"

 /**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/
#define VECTKEY                                0xFA05
#define APINT_GROUP_SUBGROUP_SETTINGS          0x0404     /*Binary Point bxxx. 0-7 Groups, 0 SubGroup*/
/**********************************************************************************************************************
*  LOCAL DATA
*********************************************************************************************************************/
/**********************************************************************************************************************
*  GLOBAL DATA
*********************************************************************************************************************/

/**********************************************************************************************************************
*  LOCAL FUNCTION PRIORITYTYPES
*********************************************************************************************************************/

/**********************************************************************************************************************
*  LOCAL FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
*  GLOBAL FUNCTION
*********************************************************************************************************************/


/******************************************************************************
* \Syntax          : void IntCrtl_Init(void)                                      
* \Description     : initialize Nvic\SCB Module by parsing the Configuration 
*                    into Nvic\SCB registers                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                     
* \Parameters (out): None                                                      
* \Return value:   : None
*******************************************************************************/
void IntCrtl_Init(void)
{
	/*TODO Config Group/ SubGroup Combination--> such as XXX, XXY*/
  APINT = VECTKEY|APINT_GROUP_SUBGROUP_SETTINGS;
	/*TODO Assign Group Priorty*/
  /*ToDo Enable/Disable NVIC/SCB*/
}

/**********************************************************************************************************************
 *  END OF FILE: IntCrtl.c
 *********************************************************************************************************************/
