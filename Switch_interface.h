/*
 * TSW_interface.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: muslim
 */

#ifndef _SW_INTERFACE_H_
#define _SW_INTERFACE_H_

/*****************************************************************/
/***********************Public Definitions************************/
/*****************************************************************/

/*Comment!= T_Switch State */
#define Switch_u8SwACTIVEHIGH	1
#define Switch_u8SwACTIVELOW	0

/*COmment!= T_Switch mode */
#define Switch_u8SwSingleMode	1
#define Switch_u8SwMultiMode   0



/*****************************************************************/
/***********************Public Functions**************************/
/*****************************************************************/

/*Comment!= Read the switch states if it's high or low */
extern u8 SW_U8CheckSw(u8 Copy_U8SwIdx, u8* Copy_U8PtrVal);

/*Comment!= Initialize the switch module */
extern void SW_voidInit();

extern int debounce(int SampleA);

#endif /* TSW_INTERFACE_H_ */
