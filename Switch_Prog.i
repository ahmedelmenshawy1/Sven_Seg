# 1 "Switch_prog.c"
# 1 "<command-line>"
# 1 "Switch_prog.c"






# 1 "Types.h" 1




typedef unsigned short int u16;
typedef short int s16;

typedef unsigned long int u32;
typedef signed long int s32;

typedef unsigned char u8;
typedef signed char s8;

typedef unsigned long long int u64;
typedef signed long long int s64;

typedef float f32;
typedef double d64;


typedef void (*function)(void);
# 8 "Switch_prog.c" 2
# 1 "delay.h" 1





# 1 "delay_config.h" 1
# 7 "delay.h" 2
# 9 "Switch_prog.c" 2
# 1 "DIO_interface.h" 1
# 75 "DIO_interface.h"
extern u8 DIO_u8ReadPinVal(u8 Copy_u8PinIdx,u8* Copy_u8PtrToVal );


extern u8 DIO_u8WritePinVal(u8 Copy_u8PinIdx,u8 Copy_u8PinToVal );


extern u8 DIO_u8ReadPortVal(u8 Copy_u8PortIdx,u8* Copy_u8PtrToVal );


extern u8 DIO_u8WritePortVal(u8 Copy_u8PortIdx,u8* Copy_u8PtrToVal );


extern u8 DIO_u8WritePinDir(u8 Copy_u8PinIdx,u8 Copy_u8PinDir);


extern u8 DIO_u8WritePortDir(u8 Copy_u8PortIdx,u8 Copy_u8PortDir);


extern u8 DIO_u8ReadPinDir(u8 Copy_u8PinIdx,u8* Copy_u8PinDir);


extern void DIO_VoidInit(void);


extern u8 DIO_u8ReadPortDir(u8 Copy_u8PortIdx,u8* Copy_u8PortDir);
# 10 "Switch_prog.c" 2
# 1 "Switch_config.h" 1
# 11 "Switch_prog.c" 2
# 1 "Switch_interface.h" 1
# 30 "Switch_interface.h"
extern u8 SW_U8CheckSw(u8 Copy_U8SwIdx, u8* Copy_U8PtrVal);


extern void SW_voidInit();
# 12 "Switch_prog.c" 2

# 1 "Switch_private.h" 1
# 14 "Switch_prog.c" 2


extern u8 SW_U8CheckSw(u8 Copy_U8SwIdx, u8* Copy_U8PtrVal)
{
 u8 Local_u8Status;
 DIO_u8WritePinDir(7, 0);
 if(Copy_U8SwIdx<32)
 {
  DIO_u8ReadPinVal(7,Copy_U8PtrVal );
# 34 "Switch_prog.c"
   if(* Copy_U8PtrVal==1)
   {
    DIO_u8ReadPinVal(7,Copy_U8PtrVal );
    if(* Copy_U8PtrVal==1)do{u32 i; for(i=((5*4000UL)/8);i>0;i--) { __asm__("NOP"); } }while(0);
    DIO_u8ReadPinVal(7,Copy_U8PtrVal );
    if(* Copy_U8PtrVal==1)do{u32 i; for(i=((5*4000UL)/8);i>0;i--) { __asm__("NOP"); } }while(0);
    DIO_u8ReadPinVal(7,Copy_U8PtrVal );
    if(* Copy_U8PtrVal==1)do{u32 i; for(i=((5*4000UL)/8);i>0;i--) { __asm__("NOP"); } }while(0);
    DIO_u8ReadPinVal(7,Copy_U8PtrVal );
    if(* Copy_U8PtrVal==1)do{u32 i; for(i=((5*4000UL)/8);i>0;i--) { __asm__("NOP"); } }while(0);

    if(* Copy_U8PtrVal==0){* Copy_U8PtrVal=3;}
   }
   else {}



  Local_u8Status=1;
 }
 else
 {
  Local_u8Status=0;
 }
 return Local_u8Status;
}

extern void SW_voidInit()
{


}
