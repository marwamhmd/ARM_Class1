/**********************************************************************************************************************
*  FILE DESCRIPTION
*  -------------------------------------------------------------------------------------------------------------------
*         File:  Std_Types.h
*    Component:  -
*       Module:  -
*
*  Description:  this module is mandatory for all modules, such that it will contain all standard types and macro
*                    that will be used by any module in the system
*
*********************************************************************************************************************/
#ifndef STD_TYPES_H
#define STD_TYPES_H
/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

#define STD_HIGH                        0x01
#define STD_LOW                         0x00

#define STD_ACTIVE                      0x01
#define STD_IDLE                        0x00

#define STD_ON                          0x01
#define STD_OFF                         0x00

#define STD_TRUE                        (BOOLEAN)0x01
#define STD_FALSE                       (BOOLEAN)0x00

#define STD_NULL                        (void*)0

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

typedef unsigned char        INT8U;                    /* Unsigned  8 bit quantity                           */
typedef          char        INT8S;                    /* Signed    8 bit quantity                           */
typedef unsigned short       INT16U;                   /* Unsigned 16 bit quantity                           */
typedef signed   short       INT16S;                   /* Signed   16 bit quantity                           */
typedef unsigned int         INT32U;                   /* Unsigned 32 bit quantity                           */
typedef signed   int         INT32S;                   /* Signed   32 bit quantity                           */
typedef unsigned long        INT64U;                   /* Unsigned 64 bit quantity                           */
typedef signed   long        INT64S;                   /* Signed   64 bit quantity                           */
typedef float                FP32;                     /* Single precision floating point                    */
typedef double               FP64;                     /* Double precision floating point                    */
typedef unsigned char        BOOLEAN;


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/



#endif /* STD_TYPES_H */
/**********************************************************************************************************************
 *  END OF FILE: Std_Types.h
 *********************************************************************************************************************/
