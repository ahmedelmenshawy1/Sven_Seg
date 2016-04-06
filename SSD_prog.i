# 1 "SSD_prog.c"
# 1 "<command-line>"
# 1 "SSD_prog.c"






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
# 8 "SSD_prog.c" 2
# 1 "delay.h" 1





# 1 "delay_config.h" 1
# 7 "delay.h" 2
# 9 "SSD_prog.c" 2
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
# 10 "SSD_prog.c" 2
# 1 "SSD_config.h" 1
# 11 "SSD_prog.c" 2
# 1 "SSD_interface.h" 1
# 42 "SSD_interface.h"
extern u8 SSD_u8DISPlay(u8 Copy_u8DispIdx,u8 Copy_u8DISPVal);
extern u8 SSD_u8GetVal( u8 Copy_u8DispIdx,u8* Copy_u8DISPVal);
extern u8 SSD_u8TurnOn( u8 Copy_u8DispIdx);
extern u8 SSD_u8TurnOff(u8 Copy_u8DispIdx);
extern void SSD_voidInit(void);
extern void SSD_voidDeleteNum(u8 Copy_u8DispIdx);
# 12 "SSD_prog.c" 2
# 1 "SSD_private.h" 1
# 10 "SSD_private.h"
u8 SSD_u8WhichSevSegment,SSD_u8WhichNumber;
# 75 "SSD_private.h"
void Num0_1(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 5 , 1 );DIO_u8WritePinVal( 4 , 1 ) ;DIO_u8WritePinVal( 3 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ; } void Num1_1(void) { DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ; } void Num2_1(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ;DIO_u8WritePinVal( 4 , 1 ) ;DIO_u8WritePinVal( 3 , 1 ) ; } void Num3_1(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ;DIO_u8WritePinVal( 3 , 1 ) ; } void Num4_1(void) { DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ;DIO_u8WritePinVal( 5 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ; } void Num5_1(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 5 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ;DIO_u8WritePinVal( 3 , 1 ) ; } void Num6_1(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 4 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ;DIO_u8WritePinVal( 3 , 1 ) ;DIO_u8WritePinVal( 5 , 1 ) ; } void Num7_1(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ; } void Num8_1(void) { DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ;DIO_u8WritePinVal( 5 , 1 ) ;DIO_u8WritePinVal( 4 , 1 ) ;DIO_u8WritePinVal( 3 , 1 );DIO_u8WritePinVal( 2 , 1 ) ; } void Num9_1(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 5 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ;DIO_u8WritePinVal( 3 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ; }


const function SSD_u8Arr_1_Numbers[10] = {

Num0_1, Num1_1, Num2_1, Num3_1, Num4_1, Num5_1, Num6_1, Num7_1, Num8_1, Num9_1,

};
# 130 "SSD_private.h"
void Num0_2(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 5 , 1 );DIO_u8WritePinVal( 4 , 1 ) ;DIO_u8WritePinVal( 3 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ; } void Num1_2(void) { DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ; } void Num2_2(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ;DIO_u8WritePinVal( 4 , 1 ) ;DIO_u8WritePinVal( 3 , 1 ) ; } void Num3_2(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ;DIO_u8WritePinVal( 3 , 1 ) ; } void Num4_2(void) { DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ;DIO_u8WritePinVal( 5 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ; } void Num5_2(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 5 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ;DIO_u8WritePinVal( 3 , 1 ) ; } void Num6_2(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 4 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ;DIO_u8WritePinVal( 3 , 1 ) ;DIO_u8WritePinVal( 5 , 1 ) ; } void Num7_2(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ; } void Num8_2(void) { DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ;DIO_u8WritePinVal( 5 , 1 ) ;DIO_u8WritePinVal( 4 , 1 ) ;DIO_u8WritePinVal( 3 , 1 );DIO_u8WritePinVal( 2 , 1 ) ; } void Num9_2(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 5 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ;DIO_u8WritePinVal( 3 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ; }


const function SSD_u8Arr_2_Numbers[10] = {

Num0_2, Num1_2, Num2_2, Num3_2, Num4_2, Num5_2, Num6_2, Num7_2, Num8_2, Num9_2,

};
# 184 "SSD_private.h"
void Num0_3(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 5 , 1 );DIO_u8WritePinVal( 4 , 1 ) ;DIO_u8WritePinVal( 3 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ; } void Num1_3(void) { DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ; } void Num2_3(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ;DIO_u8WritePinVal( 4 , 1 ) ;DIO_u8WritePinVal( 3 , 1 ) ; } void Num3_3(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ;DIO_u8WritePinVal( 3 , 1 ) ; } void Num4_3(void) { DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ;DIO_u8WritePinVal( 5 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ; } void Num5_3(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 5 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ;DIO_u8WritePinVal( 3 , 1 ) ; } void Num6_3(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 4 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ;DIO_u8WritePinVal( 3 , 1 ) ;DIO_u8WritePinVal( 5 , 1 ) ; } void Num7_3(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ; } void Num8_3(void) { DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ;DIO_u8WritePinVal( 5 , 1 ) ;DIO_u8WritePinVal( 4 , 1 ) ;DIO_u8WritePinVal( 3 , 1 );DIO_u8WritePinVal( 2 , 1 ) ; } void Num9_3(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 5 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ;DIO_u8WritePinVal( 3 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ; }


const function SSD_u8Arr_3_Numbers[10] = {

Num0_3, Num1_3, Num2_3, Num3_3, Num4_3, Num5_3, Num6_3, Num7_3, Num8_3, Num9_3,

};
# 237 "SSD_private.h"
void Num0_4(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 5 , 1 );DIO_u8WritePinVal( 4 , 1 ) ; DIO_u8WritePinVal( 3 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ; } void Num1_4(void) { DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ; } void Num2_4(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ;DIO_u8WritePinVal( 4 , 1 ) ;DIO_u8WritePinVal( 3 , 1 ) ; } void Num3_4(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ;DIO_u8WritePinVal( 3 , 1 ) ; } void Num4_4(void) { DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ;DIO_u8WritePinVal( 5 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ; } void Num5_4(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 5 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ;DIO_u8WritePinVal( 3 , 1 ) ; } void Num6_4(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 4 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ;DIO_u8WritePinVal( 3 , 1 ) ;DIO_u8WritePinVal( 5 , 1 ) ; } void Num7_4(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ; } void Num8_4(void) { DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ;DIO_u8WritePinVal( 5 , 1 ) ;DIO_u8WritePinVal( 4 , 1 ) ;DIO_u8WritePinVal( 3 , 1 );DIO_u8WritePinVal( 2 , 1 ) ; } void Num9_4(void) { DIO_u8WritePinVal( 0 , 1 ) ;DIO_u8WritePinVal( 1 , 1 ) ;DIO_u8WritePinVal( 5 , 1 ) ;DIO_u8WritePinVal( 6 , 1 ) ;DIO_u8WritePinVal( 3 , 1 ) ;DIO_u8WritePinVal( 2 , 1 ) ; }


const function SSD_u8Arr_4_Numbers[10] = {

Num0_4, Num1_4, Num2_4, Num3_4, Num4_4, Num5_4, Num6_4, Num7_4, Num8_4, Num9_4,

};
# 360 "SSD_private.h"
void Disp_1(void) { if(1==1 && 0==0){DIO_u8WritePinVal( 24 , 0 );} else{DIO_u8WritePinVal(24,1 );}} void Disp_2(void) { if(1==1 && 0==0){DIO_u8WritePinVal( 25 , 0 );} else{DIO_u8WritePinVal(25,1 );}} void Disp_3(void) { if(1==1 && 0==0){DIO_u8WritePinVal( 26 , 0 );} else{DIO_u8WritePinVal(26,1 );}} void Disp_4(void) { if(1==1 && 0==0){DIO_u8WritePinVal( 27 , 0 );} else{DIO_u8WritePinVal(27,1 );}} void Disp_5(void) { if(1==1 && 1==0){DIO_u8WritePinVal( 30 , 0 );} else{DIO_u8WritePinVal(30,1 );}} void Disp_6(void) { if(1==1 && 1==0){DIO_u8WritePinVal( 24 , 0 );} else{DIO_u8WritePinVal(24,1 );}}


const function SSD_u8ArrDispIdx[6] = {

Disp_1, Disp_2, Disp_3, Disp_4, Disp_5, Disp_6,

};





void Disp_Off_1(void) { if(1==1){DIO_u8WritePinVal( 24 , 1 ) ; }else {DIO_u8WritePinVal( 24 , 0 ) ;}} void Disp_Off_2(void) { if(1==1){DIO_u8WritePinVal( 25 , 1 ) ; }else {DIO_u8WritePinVal( 25 , 0 ) ;}} void Disp_Off_3(void) { if(1==1){DIO_u8WritePinVal( 26 , 1 ) ; }else {DIO_u8WritePinVal( 26 , 0 ) ;}} void Disp_Off_4(void) { if(1==1){DIO_u8WritePinVal( 27 , 1 ) ; }else {DIO_u8WritePinVal( 27 , 0 ) ;}} void Disp_Off_5(void) { if(1==1){DIO_u8WritePinVal( 30 , 1 ) ; }else {DIO_u8WritePinVal( 30 , 0 ) ;}} void Disp_Off_6(void) { if(1==1){DIO_u8WritePinVal( 24 , 1 ) ; }else {DIO_u8WritePinVal( 24 , 0 ) ;}}


const function SSD_u8ArrTurnOffIdx[6] = {

Disp_Off_1, Disp_Off_2, Disp_Off_3, Disp_Off_4, Disp_Off_5, Disp_Off_6,

};
# 13 "SSD_prog.c" 2

# 1 "Switch_config.h" 1
# 15 "SSD_prog.c" 2
# 1 "Switch_interface.h" 1
# 30 "Switch_interface.h"
extern u8 SW_U8CheckSw(u8 Copy_U8SwIdx, u8* Copy_U8PtrVal);


extern void SW_voidInit();
# 16 "SSD_prog.c" 2


u8 SSD_u8ArrWhichNumberDisplay[6]={0,0,
0,0,0,0};

int main (void)
{

 *((volatile u8*)(0x31))=0xff;
 SSD_voidInit();
 u8 i=0,*ptr;
# 61 "SSD_prog.c"
 while (1)
  {
# 83 "SSD_prog.c"
    SW_U8CheckSw(7,ptr);

     if(*ptr==1)
    {
     i++;

     if(i>9)i=0;
    }




    SSD_u8DISPlay(0,i);
    SSD_u8ArrDispIdx[0]();
    do{u32 i; for(i=((1*4000UL)/8);i>0;i--) { __asm__("NOP"); } }while(0);
    SSD_u8ArrTurnOffIdx[0]();

    SSD_u8DISPlay(1,i+1);
    SSD_u8ArrDispIdx[1]();
    do{u32 i; for(i=((1*4000UL)/8);i>0;i--) { __asm__("NOP"); } }while(0);
    SSD_u8ArrTurnOffIdx[1]();

    SSD_u8DISPlay(2,i+2);
    SSD_u8ArrDispIdx[2]();
    do{u32 i; for(i=((1*4000UL)/8);i>0;i--) { __asm__("NOP"); } }while(0);
    SSD_u8ArrTurnOffIdx[2]();

    SSD_u8DISPlay(3,i+3);
    SSD_u8ArrDispIdx[3]();
    do{u32 i; for(i=((1*4000UL)/8);i>0;i--) { __asm__("NOP"); } }while(0);
    SSD_u8ArrTurnOffIdx[3]();
# 123 "SSD_prog.c"
  }
  return 0;
}

extern u8 SSD_u8DISPlay(u8 Copy_u8DispIdx,u8 Copy_u8DISPVal)
{
 u8 Local_u8Status;
 if(Copy_u8DispIdx <= 5 && Copy_u8DISPVal <= 9 )
 {
  SSD_voidDeleteNum(Copy_u8DispIdx);
  SSD_voidDeleteNum(Copy_u8DispIdx);
  SSD_u8ArrDispIdx[Copy_u8DispIdx]();
  SSD_u8ArrWhichNumberDisplay[Copy_u8DispIdx]=Copy_u8DISPVal;


    SSD_u8Arr_1_Numbers[Copy_u8DISPVal]();
# 150 "SSD_prog.c"
  Local_u8Status=1;
 }
 else
 {
  Local_u8Status=0;
 }
 return Local_u8Status;
}

extern u8 SSD_u8GetVal( u8 Copy_u8DispIdx,u8* Copy_u8DISPVal)
{
 u8 Local_u8Status;
 if(Copy_u8DispIdx <= 5 )
 {
  *Copy_u8DISPVal=SSD_u8ArrWhichNumberDisplay[Copy_u8DispIdx];
  Local_u8Status=1;
 }
 else
 {
  Local_u8Status=0;
 }
 return Local_u8Status;
}


extern u8 SSD_u8TurnOff(u8 Copy_u8DispIdx)
{
 u8 Local_u8Status;
 if(Copy_u8DispIdx <= 5 )
  {
   SSD_u8ArrTurnOffIdx[Copy_u8DispIdx]();
   Local_u8Status=1;
  }
 else
 {
  Local_u8Status=0;
 }
 return Local_u8Status;
}

extern void SSD_voidDeleteNum(u8 Copy_u8DispIdx)
{

   if(Copy_u8DispIdx==0)
   {
    DIO_u8WritePinVal( 0 , 0 );
    DIO_u8WritePinVal( 1 , 0 );
    DIO_u8WritePinVal( 2 , 0 );
    DIO_u8WritePinVal( 3 , 0 );
    DIO_u8WritePinVal( 4 , 0 );
    DIO_u8WritePinVal( 5 , 0 );
    DIO_u8WritePinVal( 6 , 0 );
   }


   else if(Copy_u8DispIdx==1)
   {
    DIO_u8WritePinVal( 0 , 0 );
    DIO_u8WritePinVal( 1 , 0 );
    DIO_u8WritePinVal( 2 , 0 );
    DIO_u8WritePinVal( 3 , 0 );
    DIO_u8WritePinVal( 4 , 0 );
    DIO_u8WritePinVal( 5 , 0 );
    DIO_u8WritePinVal( 6 , 0 );
   }


   else if(Copy_u8DispIdx==2)
   {
    DIO_u8WritePinVal( 0 , 0 );
    DIO_u8WritePinVal( 1 , 0 );
    DIO_u8WritePinVal( 2 , 0 );
    DIO_u8WritePinVal( 3 , 0 );
    DIO_u8WritePinVal( 4 , 0 );
    DIO_u8WritePinVal( 5 , 0 );
    DIO_u8WritePinVal( 6 , 0 );
   }


   else if(Copy_u8DispIdx==3)
   {
    DIO_u8WritePinVal( 0 , 0 );
    DIO_u8WritePinVal( 1 , 0 );
    DIO_u8WritePinVal( 2 , 0 );
    DIO_u8WritePinVal( 3 , 0 );
    DIO_u8WritePinVal( 4 , 0 );
    DIO_u8WritePinVal( 5 , 0 );
    DIO_u8WritePinVal( 6 , 0 );
   }
# 264 "SSD_prog.c"
}

extern u8 SSD_u8TurnOn( u8 Copy_u8DispIdx)
{
 u8 Local_u8Status;
 if(Copy_u8DispIdx <= 5 )
 {
  SSD_u8ArrDispIdx[Copy_u8DispIdx]();
  Local_u8Status=1;
 }
 else
 {
  Local_u8Status=0;
 }
 return Local_u8Status;
}

extern void SSD_voidInit(void)
{
  *((volatile u8*)(0x31))=0xff;
  *((volatile u8*)(0x3A))=0xff;


    SSD_u8TurnOn(0);
    SSD_u8DISPlay(0,0);


    SSD_u8TurnOn(1);
    SSD_u8DISPlay(1,0);


    SSD_u8TurnOn(2);
       SSD_u8DISPlay(2,0);


       SSD_u8TurnOn(3);
       SSD_u8DISPlay(3,0);
# 311 "SSD_prog.c"
}
