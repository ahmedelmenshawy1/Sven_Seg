/*
 * prog.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: ahmed
 */
#include "Types.h"
#include "delay.h"
#include "DIO_interface.h"
#include "SSD_config.h"
#include "SSD_interface.h"
#include "SSD_private.h"

#include "Switch_config.h"
#include "Switch_interface.h"
#include "Switch_private.h"

/*******************************************************************/
u8 SSD_u8ArrWhichNumberDisplay[6]={SSD_u8Disp1InitValue_Seg1,SSD_u8Disp1InitValue_Seg2,
SSD_u8Disp1InitValue_Seg3,SSD_u8Disp1InitValue_Seg4,SSD_u8Disp1InitValue_Seg5,SSD_u8Disp1InitValue_Seg6};
/*******************************************************************/
int main (void)
{
	//DIO_VoidInit();
	//DDRD=0xff;
	//DDRC=0xff;
		SSD_voidInit();
	u8 SSD_u8Count1=0,SSD_u8Count2=0,SSD_u8Count3=0,SSD_u8Count4=0,* SSD_u8ptr;


	while (1)
	{
			/*

			PORTC=0Xff;
			PORTD=0X00;
			*/
			//Delay_ms_Max1s(1);
			//{0x20,0x20,0x20,0x20,0x20,0x3f,0x00}
			//{0xff,0xff,0xe5,0xe5,0xe5,0xe5,0xff,0xff}
			//PORTA=0XFF;

		///*

		 //SW_U8CheckSw(Switch_u8SW1PIN,SSD_u8ptr);
		  //debounce(Switch_u8SW1PIN);
			///*
				 if(PINA&0X80)//pressed = vcc
				{
					//Delay_ms_Max1s(10);
					//debounce(7);
					SSD_u8Count1++;
					if (SSD_u8Count1>9){SSD_u8Count1=0;SSD_u8Count2++;}
					if (SSD_u8Count2>9){SSD_u8Count2=0;SSD_u8Count3++;}
					if (SSD_u8Count3>9){SSD_u8Count3=0;SSD_u8Count4++;}
				}
				//*/

				///*
				SSD_u8DISPlay(SSD_u8Disp0,SSD_u8Count1);//a3rd 1
				SSD_u8ArrDispIdx[SSD_u8Disp0]();//aft7 seg 0
				Delay_ms_Max1s(1);
				SSD_u8ArrTurnOffIdx[SSD_u8Disp0]();//a2fl seg 0
				/////////////////////////////////////////////////
				SSD_u8DISPlay(SSD_u8Disp1,SSD_u8Count2);//a3rd 2
				SSD_u8ArrDispIdx[SSD_u8Disp1]();//aft7 seg 1
				Delay_ms_Max1s(1);
				SSD_u8ArrTurnOffIdx[SSD_u8Disp1]();//a2fl seg 1
				/////////////////////////////////////////////////
				SSD_u8DISPlay(SSD_u8Disp2,SSD_u8Count3);//a3rd 2
				SSD_u8ArrDispIdx[SSD_u8Disp2]();//aft7 seg 2
				Delay_ms_Max1s(1);
				SSD_u8ArrTurnOffIdx[SSD_u8Disp2]();//a2fl seg 2
				/////////////////////////////////////////////////
				SSD_u8DISPlay(SSD_u8Disp3,SSD_u8Count4);//a3rd 3
				SSD_u8ArrDispIdx[SSD_u8Disp3]();//aft7 seg 3
				Delay_ms_Max1s(1);
				SSD_u8ArrTurnOffIdx[SSD_u8Disp3]();//a2fl seg 3
				/////////////////////////////////////////////////
				//*/
  }
  return 0;
}
/*******************************************************************/
extern u8 SSD_u8DISPlay(u8 Copy_u8DispIdx,u8 Copy_u8DISPVal)
{
	u8 Local_u8Status;
	if(Copy_u8DispIdx <= SSD_u8MaxSevSeg && Copy_u8DISPVal <= SSD_u8MaxNumber )
	{
		SSD_voidDeleteNum(Copy_u8DispIdx);
		SSD_voidDeleteNum(Copy_u8DispIdx);
		SSD_u8ArrDispIdx[Copy_u8DispIdx]();
		SSD_u8ArrWhichNumberDisplay[Copy_u8DispIdx]=Copy_u8DISPVal;
		/*Comment:Choose which seven seg will display*/
		#if SSD_u8DispONOff_1==SSD_u8OnState
				SSD_u8Arr_1_Numbers[Copy_u8DISPVal]();
		#elif SSD_u8DispONOff_2==SSD_u8OnState
				SSD_u8Arr_2_Numbers[Copy_u8DISPVal]();
		#elif SSD_u8DispONOff_3==SSD_u8OnState
				SSD_u8Arr_3_Numbers[Copy_u8DISPVal]();
		#elif SSD_u8DispONOff_4==SSD_u8OnState
				SSD_u8Arr_4_Numbers[Copy_u8DISPVal]();
		#elif SSD_u8DispONOff_5==SSD_u8OnState
				SSD_u8Arr_5_Numbers[Copy_u8DISPVal]();
		#elif SSD_u8DispONOff_6==SSD_u8OnState
				SSD_u8Arr_6_Numbers[Copy_u8DISPVal]();
		#endif
		Local_u8Status=Ok;
	}
	else
	{
		Local_u8Status=Error;
	}
	return Local_u8Status;
}
/***************************SSD_u8TurnOff****************************************/
extern u8 SSD_u8GetVal( u8 Copy_u8DispIdx,u8* Copy_u8DISPVal)
{
	u8 Local_u8Status;
	if(Copy_u8DispIdx <=  SSD_u8MaxSevSeg )
	{
		*Copy_u8DISPVal=SSD_u8ArrWhichNumberDisplay[Copy_u8DispIdx];
		Local_u8Status=Ok;
	}
	else
	{
		Local_u8Status=Error;
	}
	return Local_u8Status;
}
/***************************SSD_u8TurnOff****************************************/

extern u8 SSD_u8TurnOff(u8 Copy_u8DispIdx)
{
	u8 Local_u8Status;
	if(Copy_u8DispIdx <=  SSD_u8MaxSevSeg )
		{
			SSD_u8ArrTurnOffIdx[Copy_u8DispIdx]();
			Local_u8Status=Ok;
		}
	else
	{
		Local_u8Status=Error;
	}
	return Local_u8Status;
}
/*******************************************************************/
extern void SSD_voidDeleteNum(u8 Copy_u8DispIdx)
{
		#if SSD_u8DispONOff_1==SSD_u8OnState
			if(Copy_u8DispIdx==SSD_u8Disp0)
			{
				DIO_u8WritePinVal( SSD_u8DispSegA1 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegB1 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegC1 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegD1 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegE1 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegF1 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegG1 , DIO_u8LOW );
			}
		#endif
		#if SSD_u8DispONOff_2==SSD_u8OnState
			else if(Copy_u8DispIdx==SSD_u8Disp1)
			{
				DIO_u8WritePinVal( SSD_u8DispSegA2 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegB2 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegC2 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegD2 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegE2 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegF2 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegG2 , DIO_u8LOW );
			}
		#endif
		#if SSD_u8DispONOff_3==SSD_u8OnState
			else if(Copy_u8DispIdx==SSD_u8Disp2)
			{
				DIO_u8WritePinVal( SSD_u8DispSegA3 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegB3 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegC3 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegD3 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegE3 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegF3 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegG3 , DIO_u8LOW );
			}
		#endif
		#if SSD_u8DispONOff_4==SSD_u8OnState
			else if(Copy_u8DispIdx==SSD_u8Disp3)
			{
				DIO_u8WritePinVal( SSD_u8DispSegA4 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegB4 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegC4 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegD4 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegE4 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegF4 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegG4 , DIO_u8LOW );
			}
		#endif
		#if SSD_u8DispONOff_5==SSD_u8OnState
			else if(Copy_u8DispIdx==SSD_u8Disp4)
		    {
				DIO_u8WritePinVal( SSD_u8DispSegA5, DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegB5, DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegC5, DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegD5, DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegE5, DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegF5, DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegG5, DIO_u8LOW );
		    }
		#endif
		#if SSD_u8DispONOff_6==SSD_u8OnState
			else if(Copy_u8DispIdx==SSD_u8Disp5)
			{
				DIO_u8WritePinVal( SSD_u8DispSegA6 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegB6 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegC6 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegD6 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegE6 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegF6 , DIO_u8LOW );
				DIO_u8WritePinVal( SSD_u8DispSegG6 , DIO_u8LOW );
			}
		#endif
}
/*******************************************************************/
extern u8 SSD_u8TurnOn( u8 Copy_u8DispIdx)
{
	u8 Local_u8Status;
	if(Copy_u8DispIdx <=  SSD_u8MaxSevSeg )
	{
		SSD_u8ArrDispIdx[Copy_u8DispIdx]();
		Local_u8Status=Ok;
	}
	else
	{
		Local_u8Status=Error;
	}
	return Local_u8Status;
}
/*******************************************************************/
extern void SSD_voidInit(void)
{
		DDRD=0xff;
		DDRA=0x7f;

		#if SSD_u8DispONOff_1==SSD_u8OnState
				SSD_u8TurnOn(SSD_u8Disp0);
				SSD_u8DISPlay(SSD_u8Disp0,SSD_u8Disp1InitValue_Seg1);
				#endif
		#if SSD_u8DispONOff_2==SSD_u8OnState
				SSD_u8TurnOn(SSD_u8Disp1);
				SSD_u8DISPlay(SSD_u8Disp1,SSD_u8Disp1InitValue_Seg2);
				#endif
		#if SSD_u8DispONOff_3==SSD_u8OnState
				SSD_u8TurnOn(SSD_u8Disp2);
			    SSD_u8DISPlay(SSD_u8Disp2,SSD_u8Disp1InitValue_Seg3);
				#endif
		#if SSD_u8DispONOff_4==SSD_u8OnState
			    SSD_u8TurnOn(SSD_u8Disp3);
			    SSD_u8DISPlay(SSD_u8Disp3,SSD_u8Disp1InitValue_Seg4);
				#endif
		#if SSD_u8DispONOff_5==SSD_u8OnState
			    SSD_u8TurnOn(SSD_u8Disp4);
			    SSD_u8DISPlay(SSD_u8Disp4,SSD_u8Disp1InitValue_Seg5);
				#endif
		#if SSD_u8DispONOff_6==SSD_u8OnState
				SSD_u8TurnOn(SSD_u8Disp5);
				SSD_u8DISPlay(SSD_u8Disp5,SSD_u8Disp1InitValue_Seg6);
				#endif

}
/*******************************************************************/

