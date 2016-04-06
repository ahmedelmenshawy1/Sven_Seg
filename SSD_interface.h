/*
 * SSD_interface.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: ahmed
 */

#ifndef _SSD_INTERFACE_H_
#define _SSD_INTERFACE_H_
/****************************Display Number**********************************/
#define SSD_u8Num0		0
#define SSD_u8Num1		1
#define SSD_u8Num2		2
#define SSD_u8Num3		3
#define SSD_u8Num4		4
#define SSD_u8Num5		5
#define SSD_u8Num6		6
#define SSD_u8Num7		7
#define SSD_u8Num8		8
#define SSD_u8Num9		9
/****************************Display Number**********************************/
#define SSD_u8Disp0		0
#define SSD_u8Disp1		1
#define SSD_u8Disp2		2
#define SSD_u8Disp3		3
#define SSD_u8Disp4		4
#define SSD_u8Disp5		5
/****************************State on or off**********************************/

#define SSD_u8OnState		0
#define SSD_u8OffState		1
/****************************Display Types**********************************/

#define SSD_u8CommanCathode		1
#define SSD_u8CommanAnode		0

/**************************************************************/
#define SSD_u8MaxNumber		9
#define SSD_u8MaxSevSeg		5

/*********************************************************************/
extern u8 SSD_u8DISPlay(u8 Copy_u8DispIdx,u8 Copy_u8DISPVal);
extern u8 SSD_u8GetVal( u8 Copy_u8DispIdx,u8* Copy_u8DISPVal);
extern u8 SSD_u8TurnOn( u8 Copy_u8DispIdx);
extern u8 SSD_u8TurnOff(u8 Copy_u8DispIdx);
extern void SSD_voidInit(void);
extern void SSD_voidDeleteNum(u8 Copy_u8DispIdx);

#endif /* SSD_INTERFACE_H_ */
