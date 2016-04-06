/*
 * Switch_Prog.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: ahmed
 */
#include "Types.h"
#include "delay.h"
#include "DIO_interface.h"

#include "Switch_config.h"
#include "Switch_interface.h"
#include "Switch_private.h"


extern u8 SW_U8CheckSw(u8 Copy_U8SwIdx, u8* Copy_U8PtrVal)
{
	u8 Local_u8Status;
		DIO_u8WritePinDir(Switch_u8SW1PIN, DIO_u8INPUT);
		if(Copy_U8SwIdx<32)
		{
			DIO_u8ReadPinVal(Switch_u8SW1PIN,Copy_U8PtrVal );
			#if	Switch_u8SWMODE==Switch_u8SwACTIVEHIGH
				#if (Switch_u8PressMode==Switch_u8SwMultiMode)
					if(* Copy_U8PtrVal==DIO_u8HIGH)
					{
						Delay_ms_Max1s(20);
						* Copy_U8PtrVal=Switch_u8PRESSED;
					}
					else {}
				#endif

				#if (Switch_u8PressMode==Switch_u8SwSingleMode)
				if(* Copy_U8PtrVal==DIO_u8HIGH)//pressed
				{
					DIO_u8ReadPinVal(Switch_u8SW1PIN,Copy_U8PtrVal );
					Delay_ms_Max1s(1);
					if(* Copy_U8PtrVal==DIO_u8HIGH)Delay_ms_Max1s(10);
					DIO_u8ReadPinVal(Switch_u8SW1PIN,Copy_U8PtrVal );
					Delay_ms_Max1s(1);
					if(* Copy_U8PtrVal==DIO_u8HIGH)Delay_ms_Max1s(1);
					DIO_u8ReadPinVal(Switch_u8SW1PIN,Copy_U8PtrVal );
					Delay_ms_Max1s(1);
					if(* Copy_U8PtrVal==DIO_u8HIGH)Delay_ms_Max1s(1);
					DIO_u8ReadPinVal(Switch_u8SW1PIN,Copy_U8PtrVal );
					if(* Copy_U8PtrVal==DIO_u8HIGH)Delay_ms_Max1s(1);
					Delay_ms_Max1s(1);

					if(* Copy_U8PtrVal==DIO_u8LOW){* Copy_U8PtrVal=Switch_u8PRESSED;}
				}
				//else {}
				#endif
		#endif
		#if	Switch_u8SWMODE==Switch_u8SwACTIVELOW
				#if (Switch_u8PressMode==Switch_u8SwMultiMode)
					if(* Copy_U8PtrVal==DIO_u8LOW)
					{
						Delay_ms_Max1s(30);
						* Copy_U8PtrVal=Switch_u8PRESSED;
					}
					else {}
				#endif

				#if (Switch_u8PressMode==Switch_u8SwSingleMode)
				if(* Copy_U8PtrVal==DIO_u8LOW)//pressed
				{
					DIO_u8ReadPinVal(Switch_u8SW1PIN,Copy_U8PtrVal );
					if(* Copy_U8PtrVal==DIO_u8LOW)Delay_ms_Max1s(5);
					DIO_u8ReadPinVal(Switch_u8SW1PIN,Copy_U8PtrVal );
					if(* Copy_U8PtrVal==DIO_u8LOW)Delay_ms_Max1s(5);
					DIO_u8ReadPinVal(Switch_u8SW1PIN,Copy_U8PtrVal );
					if(* Copy_U8PtrVal==DIO_u8LOW)Delay_ms_Max1s(5);
					DIO_u8ReadPinVal(Switch_u8SW1PIN,Copy_U8PtrVal );
					if(* Copy_U8PtrVal==DIO_u8LOW)Delay_ms_Max1s(5);

					if(* Copy_U8PtrVal==DIO_u8HIGH){* Copy_U8PtrVal=Switch_u8PRESSED;}
				}
				else {}
				#endif
		#endif
			Local_u8Status=Ok;
		}
		else
		{
			Local_u8Status=Error;
		}
		return Local_u8Status;
}

extern void SW_voidInit()
{


}

#define NUM_SAMPLES 10
/*
int debounce (int Sample)
{
static int Samples[NUM_SAMPLES];
static int index = 0;
static int LastDebounceResult = 0;
int andTerm = Sample;
int orTerm = Sample;

	Samples[index++] = Sample;
	if (index >= NUM_SAMPLES)
	index = 0;

	for (int j = 1; j < NUM_SAMPLES; j++)
	{
	andTerm &= Samples[j];
	orTerm |= Samples[j];
	}

	return (LastDebounceResult = (LastDebounceResult & orTerm) | andTerm);
}
*/
int debounce(int SampleA)
{
static int SampleB = 0;
static int SampleC = 0;
static int LastDebounceResult = 0;

LastDebounceResult = (LastDebounceResult & (SampleA | SampleB | SampleC)) | (SampleA & SampleB & SampleC);
SampleC = SampleB;
SampleB = SampleA;
return LastDebounceResult;
}
