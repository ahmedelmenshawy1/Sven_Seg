/*
 * SSD_private.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: ahmed
 */
#ifndef _SSD_PRIVATE_H_
#define _SSD_PRIVATE_H_
/*Comment!:to know which number to display & which 7 segment work on */
u8 SSD_u8WhichSevSegment,SSD_u8WhichNumber;
//u8 const SSD_u8Arr[6][11]={};
/*******************************************************************/
///*
  #define SSD_u8TurnOFFDisplay \
  FUNC(Disp_Off_1, { if(SSD_u8DispType_7seg_1==SSD_u8CommanCathode){DIO_u8WritePinVal( SSD_u8Disp1Comman , DIO_u8HIGH ) ; }else {DIO_u8WritePinVal( SSD_u8Disp1Comman , DIO_u8LOW  ) ;}}) \
  FUNC(Disp_Off_2, { if(SSD_u8DispType_7seg_2==SSD_u8CommanCathode){DIO_u8WritePinVal( SSD_u8Disp2Comman , DIO_u8HIGH ) ; }else {DIO_u8WritePinVal( SSD_u8Disp2Comman , DIO_u8LOW  ) ;}}) \
  FUNC(Disp_Off_3, { if(SSD_u8DispType_7seg_3==SSD_u8CommanCathode){DIO_u8WritePinVal( SSD_u8Disp3Comman , DIO_u8HIGH ) ; }else {DIO_u8WritePinVal( SSD_u8Disp3Comman , DIO_u8LOW  ) ;}}) \
  FUNC(Disp_Off_4, { if(SSD_u8DispType_7seg_4==SSD_u8CommanCathode){DIO_u8WritePinVal( SSD_u8Disp4Comman , DIO_u8HIGH ) ; }else {DIO_u8WritePinVal( SSD_u8Disp4Comman , DIO_u8LOW  ) ;}}) \
  FUNC(Disp_Off_5, { if(SSD_u8DispType_7seg_5==SSD_u8CommanCathode){DIO_u8WritePinVal( SSD_u8Disp5Comman , DIO_u8HIGH ) ; }else {DIO_u8WritePinVal( SSD_u8Disp5Comman , DIO_u8LOW  ) ;}}) \
  FUNC(Disp_Off_6, { if(SSD_u8DispType_7seg_6==SSD_u8CommanCathode){DIO_u8WritePinVal( SSD_u8Disp6Comman , DIO_u8HIGH ) ; }else {DIO_u8WritePinVal( SSD_u8Disp6Comman , DIO_u8LOW  ) ;}})
//*/
/*******************************************************************/
///*
#define SSD_u8TurnOnDisplay \
  FUNC(Disp_1, {/*SSD_u8WhichSevSegment=1;*/ if(SSD_u8DispType_7seg_1==SSD_u8CommanCathode && SSD_u8DispONOff_1==SSD_u8OnState){DIO_u8WritePinVal( SSD_u8Disp1Comman , DIO_u8LOW );} else{DIO_u8WritePinVal(SSD_u8Disp1Comman,DIO_u8HIGH );}}) \
  FUNC(Disp_2, {/*SSD_u8WhichSevSegment=2;*/ if(SSD_u8DispType_7seg_2==SSD_u8CommanCathode && SSD_u8DispONOff_2==SSD_u8OnState){DIO_u8WritePinVal( SSD_u8Disp2Comman , DIO_u8LOW );} else{DIO_u8WritePinVal(SSD_u8Disp2Comman,DIO_u8HIGH );}}) \
  FUNC(Disp_3, {/*SSD_u8WhichSevSegment=3;*/ if(SSD_u8DispType_7seg_3==SSD_u8CommanCathode && SSD_u8DispONOff_3==SSD_u8OnState){DIO_u8WritePinVal( SSD_u8Disp3Comman , DIO_u8LOW );} else{DIO_u8WritePinVal(SSD_u8Disp3Comman,DIO_u8HIGH );}}) \
  FUNC(Disp_4, {/*SSD_u8WhichSevSegment=4;*/ if(SSD_u8DispType_7seg_4==SSD_u8CommanCathode && SSD_u8DispONOff_4==SSD_u8OnState){DIO_u8WritePinVal( SSD_u8Disp4Comman , DIO_u8LOW );} else{DIO_u8WritePinVal(SSD_u8Disp4Comman,DIO_u8HIGH );}}) \
  FUNC(Disp_5, {/*SSD_u8WhichSevSegment=5;*/ if(SSD_u8DispType_7seg_5==SSD_u8CommanCathode && SSD_u8DispONOff_5==SSD_u8OnState){DIO_u8WritePinVal( SSD_u8Disp5Comman , DIO_u8LOW );} else{DIO_u8WritePinVal(SSD_u8Disp5Comman,DIO_u8HIGH );}}) \
  FUNC(Disp_6, {/*SSD_u8WhichSevSegment=6;*/ if(SSD_u8DispType_7seg_6==SSD_u8CommanCathode && SSD_u8DispONOff_6==SSD_u8OnState){DIO_u8WritePinVal( SSD_u8Disp6Comman , DIO_u8LOW );} else{DIO_u8WritePinVal(SSD_u8Disp6Comman,DIO_u8HIGH );}})
//*/

/*******************************************************************/
/*Comment!:Set Pins Range A~G for Display 1 */
///*
#if SSD_u8DispONOff_1==SSD_u8OnState

#define 	SSD_u8SegA1			DIO_u8WritePinVal( SSD_u8DispSegA1 , DIO_u8HIGH )
#define 	SSD_u8SegB1			DIO_u8WritePinVal( SSD_u8DispSegB1 , DIO_u8HIGH )
#define 	SSD_u8SegC1			DIO_u8WritePinVal( SSD_u8DispSegC1 , DIO_u8HIGH )
#define 	SSD_u8SegD1			DIO_u8WritePinVal( SSD_u8DispSegD1 , DIO_u8HIGH )
#define 	SSD_u8SegE1			DIO_u8WritePinVal( SSD_u8DispSegE1 , DIO_u8HIGH )
#define 	SSD_u8SegF1			DIO_u8WritePinVal( SSD_u8DispSegF1 , DIO_u8HIGH )
#define 	SSD_u8SegG1			DIO_u8WritePinVal( SSD_u8DispSegG1 , DIO_u8HIGH )
/*Comment!:Set Nums Range 0~9 for Display 1 */

///*
#define SSD_u8_1_Num_0 	SSD_u8SegA1 ;SSD_u8SegB1 ;SSD_u8SegF1;SSD_u8SegE1 ;SSD_u8SegD1 ;SSD_u8SegC1
#define	SSD_u8_1_Num_1	SSD_u8SegB1 ;SSD_u8SegC1
#define	SSD_u8_1_Num_2	SSD_u8SegA1 ;SSD_u8SegB1 ;SSD_u8SegG1 ;SSD_u8SegE1 ;SSD_u8SegD1
#define SSD_u8_1_Num_3 	SSD_u8SegA1 ;SSD_u8SegB1 ;SSD_u8SegG1 ;SSD_u8SegC1 ;SSD_u8SegD1
#define	SSD_u8_1_Num_4 	SSD_u8SegB1 ;SSD_u8SegC1 ;SSD_u8SegF1 ;SSD_u8SegG1
#define	SSD_u8_1_Num_5 	SSD_u8SegA1 ;SSD_u8SegF1 ;SSD_u8SegG1 ;SSD_u8SegC1 ;SSD_u8SegD1
#define SSD_u8_1_Num_6 	SSD_u8SegA1 ;SSD_u8SegE1 ;SSD_u8SegG1 ;SSD_u8SegC1 ;SSD_u8SegD1 ;SSD_u8SegF1
#define	SSD_u8_1_Num_7 	SSD_u8SegA1 ;SSD_u8SegB1 ;SSD_u8SegC1
#define	SSD_u8_1_Num_8 	SSD_u8SegB1 ;SSD_u8SegA1 ;SSD_u8SegG1 ;SSD_u8SegF1 ;SSD_u8SegE1 ;SSD_u8SegD1;SSD_u8SegC1
#define	SSD_u8_1_Num_9 	SSD_u8SegA1 ;SSD_u8SegB1 ;SSD_u8SegF1 ;SSD_u8SegG1 ;SSD_u8SegD1 ;SSD_u8SegC1

/*******************************************************************/
  #define SSD_u8Disp1Nums \
  FUNC(Num0_1, {/*SSD_u8WhichNumber=0;*/  SSD_u8_1_Num_0 ; }) \
  FUNC(Num1_1, {/*SSD_u8WhichNumber=1;*/  SSD_u8_1_Num_1 ; }) \
  FUNC(Num2_1, {/*SSD_u8WhichNumber=2;*/  SSD_u8_1_Num_2 ; }) \
  FUNC(Num3_1, {/*SSD_u8WhichNumber=3;*/  SSD_u8_1_Num_3 ; }) \
  FUNC(Num4_1, {/*SSD_u8WhichNumber=4;*/  SSD_u8_1_Num_4 ; }) \
  FUNC(Num5_1, {/*SSD_u8WhichNumber=5;*/  SSD_u8_1_Num_5 ; }) \
  FUNC(Num6_1, {/*SSD_u8WhichNumber=6;*/  SSD_u8_1_Num_6 ; }) \
  FUNC(Num7_1, {/*SSD_u8WhichNumber=7;*/  SSD_u8_1_Num_7 ; }) \
  FUNC(Num8_1, {/*SSD_u8WhichNumber=8;*/  SSD_u8_1_Num_8 ; }) \
  FUNC(Num9_1, {/*SSD_u8WhichNumber=9;*/  SSD_u8_1_Num_9 ; })

/***************************Array of fuction in Nums in Disp 1****************************************/
//*/
#define FUNC(name, body) void name(void) body
SSD_u8Disp1Nums
#undef FUNC

const function SSD_u8Arr_1_Numbers[10] = {
#define FUNC(name, body) name,
SSD_u8Disp1Nums
#undef FUNC
};

//*/


#endif
/*******************************************************************/
/*Comment!:Set Pins Range A~G for Display 2 */
///*
#if SSD_u8DispONOff_2==SSD_u8OnState

#define 	SSD_u8SegA2			DIO_u8WritePinVal( SSD_u8DispSegA2	 , DIO_u8HIGH )
#define 	SSD_u8SegB2			DIO_u8WritePinVal( SSD_u8DispSegB2	 , DIO_u8HIGH )
#define 	SSD_u8SegC2			DIO_u8WritePinVal( SSD_u8DispSegC2	 , DIO_u8HIGH )
#define 	SSD_u8SegD2			DIO_u8WritePinVal( SSD_u8DispSegD2	 , DIO_u8HIGH )
#define 	SSD_u8SegE2			DIO_u8WritePinVal( SSD_u8DispSegE2	 , DIO_u8HIGH )
#define 	SSD_u8SegF2			DIO_u8WritePinVal( SSD_u8DispSegF2	 , DIO_u8HIGH )
#define 	SSD_u8SegG2			DIO_u8WritePinVal( SSD_u8DispSegG2	 , DIO_u8HIGH )

/*Comment!:Set Nums Range 0~9 for Display 2 */

///*
#define SSD_u8_2_Num_0 	SSD_u8SegA2 ;SSD_u8SegB2 ;SSD_u8SegF2;SSD_u8SegE2 ;SSD_u8SegD2 ;SSD_u8SegC2
#define	SSD_u8_2_Num_1	SSD_u8SegB2 ;SSD_u8SegC2
#define	SSD_u8_2_Num_2	SSD_u8SegA2 ;SSD_u8SegB2 ;SSD_u8SegG2 ;SSD_u8SegE2 ;SSD_u8SegD2
#define SSD_u8_2_Num_3 	SSD_u8SegA2 ;SSD_u8SegB2 ;SSD_u8SegG2 ;SSD_u8SegC2 ;SSD_u8SegD2
#define	SSD_u8_2_Num_4 	SSD_u8SegB2 ;SSD_u8SegC2 ;SSD_u8SegF2 ;SSD_u8SegG2
#define	SSD_u8_2_Num_5 	SSD_u8SegA2 ;SSD_u8SegF2 ;SSD_u8SegG2 ;SSD_u8SegC2 ;SSD_u8SegD2
#define SSD_u8_2_Num_6 	SSD_u8SegA2 ;SSD_u8SegE2 ;SSD_u8SegG2 ;SSD_u8SegC2 ;SSD_u8SegD2 ;SSD_u8SegF2
#define	SSD_u8_2_Num_7 	SSD_u8SegA2 ;SSD_u8SegB2 ;SSD_u8SegC2
#define	SSD_u8_2_Num_8 	SSD_u8SegB2 ;SSD_u8SegA2 ;SSD_u8SegG2 ;SSD_u8SegF2 ;SSD_u8SegE2 ;SSD_u8SegD2;SSD_u8SegC2
#define	SSD_u8_2_Num_9 	SSD_u8SegA2 ;SSD_u8SegB2 ;SSD_u8SegF2 ;SSD_u8SegG2 ;SSD_u8SegD2 ;SSD_u8SegC2

/*******************************************************************/
#define SSD_u8Disp2Nums \
  FUNC(Num0_2, {/*SSD_u8WhichNumber=0;*/  SSD_u8_2_Num_0 ; }) \
  FUNC(Num1_2, {/*SSD_u8WhichNumber=1;*/  SSD_u8_2_Num_1 ; }) \
  FUNC(Num2_2, {/*SSD_u8WhichNumber=2;*/  SSD_u8_2_Num_2 ; }) \
  FUNC(Num3_2, {/*SSD_u8WhichNumber=3;*/  SSD_u8_2_Num_3 ; }) \
  FUNC(Num4_2, {/*SSD_u8WhichNumber=4;*/  SSD_u8_2_Num_4 ; }) \
  FUNC(Num5_2, {/*SSD_u8WhichNumber=5;*/  SSD_u8_2_Num_5 ; }) \
  FUNC(Num6_2, {/*SSD_u8WhichNumber=6;*/  SSD_u8_2_Num_6 ; }) \
  FUNC(Num7_2, {/*SSD_u8WhichNumber=7;*/  SSD_u8_2_Num_7 ; }) \
  FUNC(Num8_2, {/*SSD_u8WhichNumber=8;*/  SSD_u8_2_Num_8 ; }) \
  FUNC(Num9_2, {/*SSD_u8WhichNumber=9;*/  SSD_u8_2_Num_9 ; })
/***************************Array of fuction in Nums in Disp 2****************************************/
//*/
#define FUNC(name, body) void name(void) body
SSD_u8Disp2Nums
#undef FUNC

const function SSD_u8Arr_2_Numbers[10] = {
#define FUNC(name, body) name,
SSD_u8Disp2Nums
#undef FUNC
};
//*/

#endif
/*******************************************************************/
/*Comment!:Set Pins Range A~G for Display 3 */
///*
#if SSD_u8DispONOff_3==SSD_u8OnState

#define 	SSD_u8SegA3			DIO_u8WritePinVal( SSD_u8DispSegA3 , DIO_u8HIGH )
#define 	SSD_u8SegB3			DIO_u8WritePinVal( SSD_u8DispSegB3 , DIO_u8HIGH )
#define 	SSD_u8SegC3			DIO_u8WritePinVal( SSD_u8DispSegC3 , DIO_u8HIGH )
#define 	SSD_u8SegD3			DIO_u8WritePinVal( SSD_u8DispSegD3 , DIO_u8HIGH )
#define 	SSD_u8SegE3			DIO_u8WritePinVal( SSD_u8DispSegE3 , DIO_u8HIGH )
#define 	SSD_u8SegF3			DIO_u8WritePinVal( SSD_u8DispSegF3 , DIO_u8HIGH )
#define 	SSD_u8SegG3			DIO_u8WritePinVal( SSD_u8DispSegG3 , DIO_u8HIGH )

/*Comment!:Set Nums Range 0~9 for Display 3 */

///*
#define SSD_u8_3_Num_0 	SSD_u8SegA3 ;SSD_u8SegB3 ;SSD_u8SegF3;SSD_u8SegE3 ;SSD_u8SegD3 ;SSD_u8SegC3
#define	SSD_u8_3_Num_1	SSD_u8SegB3 ;SSD_u8SegC3
#define	SSD_u8_3_Num_2	SSD_u8SegA3 ;SSD_u8SegB3 ;SSD_u8SegG3 ;SSD_u8SegE3 ;SSD_u8SegD3
#define SSD_u8_3_Num_3 	SSD_u8SegA3 ;SSD_u8SegB3 ;SSD_u8SegG3 ;SSD_u8SegC3 ;SSD_u8SegD3
#define	SSD_u8_3_Num_4 	SSD_u8SegB3 ;SSD_u8SegC3 ;SSD_u8SegF3 ;SSD_u8SegG3
#define	SSD_u8_3_Num_5 	SSD_u8SegA3 ;SSD_u8SegF3 ;SSD_u8SegG3 ;SSD_u8SegC3 ;SSD_u8SegD3
#define SSD_u8_3_Num_6 	SSD_u8SegA3 ;SSD_u8SegE3 ;SSD_u8SegG3 ;SSD_u8SegC3 ;SSD_u8SegD3 ;SSD_u8SegF3
#define	SSD_u8_3_Num_7 	SSD_u8SegA3 ;SSD_u8SegB3 ;SSD_u8SegC3
#define	SSD_u8_3_Num_8 	SSD_u8SegB3 ;SSD_u8SegA3 ;SSD_u8SegG3 ;SSD_u8SegF3 ;SSD_u8SegE3 ;SSD_u8SegD3;SSD_u8SegC3
#define	SSD_u8_3_Num_9 	SSD_u8SegA3 ;SSD_u8SegB3 ;SSD_u8SegF3 ;SSD_u8SegG3 ;SSD_u8SegD3 ;SSD_u8SegC3

/*******************************************************************/
#define SSD_u8Disp3Nums \
  FUNC(Num0_3, {/*SSD_u8WhichNumber=0;*/  SSD_u8_3_Num_0 ; }) \
  FUNC(Num1_3, {/*SSD_u8WhichNumber=1;*/  SSD_u8_3_Num_1 ; }) \
  FUNC(Num2_3, {/*SSD_u8WhichNumber=2;*/  SSD_u8_3_Num_2 ; }) \
  FUNC(Num3_3, {/*SSD_u8WhichNumber=3;*/  SSD_u8_3_Num_3 ; }) \
  FUNC(Num4_3, {/*SSD_u8WhichNumber=4;*/  SSD_u8_3_Num_4 ; }) \
  FUNC(Num5_3, {/*SSD_u8WhichNumber=5;*/  SSD_u8_3_Num_5 ; }) \
  FUNC(Num6_3, {/*SSD_u8WhichNumber=6;*/  SSD_u8_3_Num_6 ; }) \
  FUNC(Num7_3, {/*SSD_u8WhichNumber=7;*/  SSD_u8_3_Num_7 ; }) \
  FUNC(Num8_3, {/*SSD_u8WhichNumber=8;*/  SSD_u8_3_Num_8 ; }) \
  FUNC(Num9_3, {/*SSD_u8WhichNumber=9;*/  SSD_u8_3_Num_9 ; })

/***************************Array of fuction in Nums in Disp 3****************************************/
//*/
#define FUNC(name, body) void name(void) body
SSD_u8Disp3Nums
#undef FUNC

const function SSD_u8Arr_3_Numbers[10] = {
#define FUNC(name, body) name,
SSD_u8Disp3Nums
#undef FUNC
};
//*/


#endif
/*******************************************************************/
/*Comment!:Set Pins Range A~G for Display 4 */
///*
#if SSD_u8DispONOff_4==SSD_u8OnState

#define 	SSD_u8SegA4			DIO_u8WritePinVal( SSD_u8DispSegA4 , DIO_u8HIGH )
#define 	SSD_u8SegB4			DIO_u8WritePinVal( SSD_u8DispSegB4 , DIO_u8HIGH )
#define 	SSD_u8SegC4			DIO_u8WritePinVal( SSD_u8DispSegC4 , DIO_u8HIGH )
#define 	SSD_u8SegD4			DIO_u8WritePinVal( SSD_u8DispSegD4 , DIO_u8HIGH )
#define 	SSD_u8SegE4			DIO_u8WritePinVal( SSD_u8DispSegE4 , DIO_u8HIGH )
#define 	SSD_u8SegF4			DIO_u8WritePinVal( SSD_u8DispSegF4 , DIO_u8HIGH )
#define 	SSD_u8SegG4			DIO_u8WritePinVal( SSD_u8DispSegG4 , DIO_u8HIGH )

/*Comment!:Set Nums Range 0~9 for Display 4 */

///*
#define SSD_u8_4_Num_0 	SSD_u8SegA4 ;SSD_u8SegB4 ;SSD_u8SegF4;SSD_u8SegE4 ; SSD_u8SegD4 ;SSD_u8SegC4
#define	SSD_u8_4_Num_1	SSD_u8SegB4 ;SSD_u8SegC4
#define	SSD_u8_4_Num_2	SSD_u8SegA4 ;SSD_u8SegB4 ;SSD_u8SegG4 ;SSD_u8SegE4 ;SSD_u8SegD4
#define SSD_u8_4_Num_3 	SSD_u8SegA4 ;SSD_u8SegB4 ;SSD_u8SegG4 ;SSD_u8SegC4 ;SSD_u8SegD4
#define	SSD_u8_4_Num_4 	SSD_u8SegB4 ;SSD_u8SegC4 ;SSD_u8SegF4 ;SSD_u8SegG4
#define	SSD_u8_4_Num_5 	SSD_u8SegA4 ;SSD_u8SegF4 ;SSD_u8SegG4 ;SSD_u8SegC4 ;SSD_u8SegD4
#define SSD_u8_4_Num_6 	SSD_u8SegA4 ;SSD_u8SegE4 ;SSD_u8SegG4 ;SSD_u8SegC4 ;SSD_u8SegD4 ;SSD_u8SegF4
#define	SSD_u8_4_Num_7 	SSD_u8SegA4 ;SSD_u8SegB4 ;SSD_u8SegC4
#define	SSD_u8_4_Num_8 	SSD_u8SegB4 ;SSD_u8SegA4 ;SSD_u8SegG4 ;SSD_u8SegF4 ;SSD_u8SegE4 ;SSD_u8SegD4;SSD_u8SegC4
#define	SSD_u8_4_Num_9 	SSD_u8SegA4 ;SSD_u8SegB4 ;SSD_u8SegF4 ;SSD_u8SegG4 ;SSD_u8SegD4 ;SSD_u8SegC4
/*******************************************************************/
#define SSD_u8Disp4Nums \
  FUNC(Num0_4, {/*SSD_u8WhichNumber=0;*/  SSD_u8_4_Num_0 ; }) \
  FUNC(Num1_4, {/*SSD_u8WhichNumber=1;*/  SSD_u8_4_Num_1 ; }) \
  FUNC(Num2_4, {/*SSD_u8WhichNumber=2;*/  SSD_u8_4_Num_2 ; }) \
  FUNC(Num3_4, {/*SSD_u8WhichNumber=3;*/  SSD_u8_4_Num_3 ; }) \
  FUNC(Num4_4, {/*SSD_u8WhichNumber=4;*/  SSD_u8_4_Num_4 ; }) \
  FUNC(Num5_4, {/*SSD_u8WhichNumber=5;*/  SSD_u8_4_Num_5 ; }) \
  FUNC(Num6_4, {/*SSD_u8WhichNumber=6;*/  SSD_u8_4_Num_6 ; }) \
  FUNC(Num7_4, {/*SSD_u8WhichNumber=7;*/  SSD_u8_4_Num_7 ; }) \
  FUNC(Num8_4, {/*SSD_u8WhichNumber=8;*/  SSD_u8_4_Num_8 ; }) \
  FUNC(Num9_4, {/*SSD_u8WhichNumber=9;*/  SSD_u8_4_Num_9 ; })
/***************************Array of fuction in Nums in Disp 4****************************************/
//*/
#define FUNC(name, body) void name(void) body
SSD_u8Disp4Nums
#undef FUNC

const function SSD_u8Arr_4_Numbers[10] = {
#define FUNC(name, body) name,
SSD_u8Disp4Nums
#undef FUNC
};
//*/

#endif
/*******************************************************************/
/*Comment!:Set Pins Range A~G for Display 5 */
///*
#if SSD_u8DispONOff_5==SSD_u8OnState

#define 	SSD_u8SegA5			DIO_u8WritePinVal( SSD_u8DispSegA5 , DIO_u8HIGH )
#define 	SSD_u8SegB5			DIO_u8WritePinVal( SSD_u8DispSegB5 , DIO_u8HIGH )
#define 	SSD_u8SegC5			DIO_u8WritePinVal( SSD_u8DispSegC5 , DIO_u8HIGH )
#define 	SSD_u8SegD5			DIO_u8WritePinVal( SSD_u8DispSegD5 , DIO_u8HIGH )
#define 	SSD_u8SegE5			DIO_u8WritePinVal( SSD_u8DispSegE5 , DIO_u8HIGH )
#define 	SSD_u8SegF5			DIO_u8WritePinVal( SSD_u8DispSegF5 , DIO_u8HIGH )
#define 	SSD_u8SegG5			DIO_u8WritePinVal( SSD_u8DispSegG5 , DIO_u8HIGH )
/*Comment!:Set Nums Range 0~9 for Display 5 */

///*
#define SSD_u8_5_Num_0 	SSD_u8SegA5 ;SSD_u8SegB5 ;SSD_u8SegF5; SSD_u8SegE5 ;SSD_u8SegD5 ;SSD_u8SegC5
#define	SSD_u8_5_Num_1	SSD_u8SegB5 ;SSD_u8SegC5
#define	SSD_u8_5_Num_2	SSD_u8SegA5 ;SSD_u8SegB5 ;SSD_u8SegG5 ;SSD_u8SegE5 ;SSD_u8SegD5
#define SSD_u8_5_Num_3 	SSD_u8SegA5 ;SSD_u8SegB5 ;SSD_u8SegG5 ;SSD_u8SegC5 ;SSD_u8SegD5
#define	SSD_u8_5_Num_4 	SSD_u8SegB5 ;SSD_u8SegC5 ;SSD_u8SegF5 ;SSD_u8SegG5
#define	SSD_u8_5_Num_5 	SSD_u8SegA5 ;SSD_u8SegF5 ;SSD_u8SegG5 ;SSD_u8SegC5 ;SSD_u8SegD5
#define SSD_u8_5_Num_6 	SSD_u8SegA5 ;SSD_u8SegE5 ;SSD_u8SegG5 ;SSD_u8SegC5 ;SSD_u8SegD5 ;SSD_u8SegF5
#define	SSD_u8_5_Num_7 	SSD_u8SegA5 ;SSD_u8SegB5 ;SSD_u8SegC5
#define	SSD_u8_5_Num_8 	SSD_u8SegB5 ;SSD_u8SegA5 ;SSD_u8SegG5 ;SSD_u8SegF5 ;SSD_u8SegE5 ;SSD_u8SegD5;SSD_u8SegC5
#define	SSD_u8_5_Num_9 	SSD_u8SegA5 ;SSD_u8SegB5 ;SSD_u8SegF5 ;SSD_u8SegG5 ;SSD_u8SegD5 ;SSD_u8SegC5
/*******************************************************************/
#define SSD_u8Disp5Nums \
  FUNC(Num0_5, {/*SSD_u8WhichNumber=0;*/  SSD_u8_5_Num_0 ; }) \
  FUNC(Num1_5, {/*SSD_u8WhichNumber=1;*/  SSD_u8_5_Num_1 ; }) \
  FUNC(Num2_5, {/*SSD_u8WhichNumber=2;*/  SSD_u8_5_Num_2 ; }) \
  FUNC(Num3_5, {/*SSD_u8WhichNumber=3;*/  SSD_u8_5_Num_3 ; }) \
  FUNC(Num4_5, {/*SSD_u8WhichNumber=4;*/  SSD_u8_5_Num_4 ; }) \
  FUNC(Num5_5, {/*SSD_u8WhichNumber=5;*/  SSD_u8_5_Num_5 ; }) \
  FUNC(Num6_5, {/*SSD_u8WhichNumber=6;*/  SSD_u8_5_Num_6 ; }) \
  FUNC(Num7_5, {/*SSD_u8WhichNumber=7;*/  SSD_u8_5_Num_7 ; }) \
  FUNC(Num8_5, {/*SSD_u8WhichNumber=8;*/  SSD_u8_5_Num_8 ; }) \
  FUNC(Num9_5, {/*SSD_u8WhichNumber=9;*/  SSD_u8_5_Num_9 ; })

/***************************Array of fuction in Nums in Disp 5****************************************/
//*/
#define FUNC(name, body) void name(void) body
SSD_u8Disp5Nums
#undef FUNC

const function SSD_u8Arr_5_Numbers[10] = {
#define FUNC(name, body) name,
SSD_u8Disp5Nums
#undef FUNC
};
//*/

#endif
/*******************************************************************/
/*Comment!:Set Pins Range A~G for Display 6 */
///*
#if SSD_u8DispONOff_6==SSD_u8OnState

#define 	SSD_u8SegA6			DIO_u8WritePinVal( SSD_u8DispSegA6 , DIO_u8HIGH )
#define 	SSD_u8SegB6			DIO_u8WritePinVal( SSD_u8DispSegB6 , DIO_u8HIGH )
#define 	SSD_u8SegC6			DIO_u8WritePinVal( SSD_u8DispSegC6 , DIO_u8HIGH )
#define 	SSD_u8SegD6			DIO_u8WritePinVal( SSD_u8DispSegD6 , DIO_u8HIGH )
#define 	SSD_u8SegE6			DIO_u8WritePinVal( SSD_u8DispSegE6 , DIO_u8HIGH )
#define 	SSD_u8SegF6			DIO_u8WritePinVal( SSD_u8DispSegF6 , DIO_u8HIGH )
#define 	SSD_u8SegG6			DIO_u8WritePinVal( SSD_u8DispSegG6 , DIO_u8HIGH )

/*Comment!:Set Nums Range 0~9 for Display 6 */

///*
#define SSD_u8_6_Num_0 	SSD_u8SegA6 ;SSD_u8SegB6 ;SSD_u8SegF6; SSD_u8SegE6 ;SSD_u8SegD6;SSD_u8SegC6
#define	SSD_u8_6_Num_1	SSD_u8SegB6 ;SSD_u8SegC6
#define	SSD_u8_6_Num_2	SSD_u8SegA6 ;SSD_u8SegB6 ;SSD_u8SegG6 ;SSD_u8SegE6 ;SSD_u8SegD6
#define SSD_u8_6_Num_3 	SSD_u8SegA6 ;SSD_u8SegB6 ;SSD_u8SegG6 ;SSD_u8SegC6 ;SSD_u8SegD6
#define	SSD_u8_6_Num_4 	SSD_u8SegB6 ;SSD_u8SegC6 ;SSD_u8SegF6 ;SSD_u8SegG6
#define	SSD_u8_6_Num_5 	SSD_u8SegA6 ;SSD_u8SegF6 ;SSD_u8SegG6 ;SSD_u8SegC6 ;SSD_u8SegD6
#define SSD_u8_6_Num_6 	SSD_u8SegA6 ;SSD_u8SegE6 ;SSD_u8SegG6 ;SSD_u8SegC6 ;SSD_u8SegD6;SSD_u8SegF6
#define	SSD_u8_6_Num_7 	SSD_u8SegA6 ;SSD_u8SegB6 ;SSD_u8SegC6
#define	SSD_u8_6_Num_8 	SSD_u8SegB6 ;SSD_u8SegA6 ;SSD_u8SegG6 ;SSD_u8SegF6 ;SSD_u8SegE6;SSD_u8SegD6;SSD_u8SegC6
#define	SSD_u8_6_Num_9 	SSD_u8SegA6 ;SSD_u8SegB6 ;SSD_u8SegF6 ;SSD_u8SegG6 ;SSD_u8SegD6;SSD_u8SegC6
/*******************************************************************/
#define SSD_u8Disp6Nums \
  FUNC(Num0_6, {/*SSD_u8WhichNumber=0;*/  SSD_u8_6_Num_0 ; }) \
  FUNC(Num1_6, {/*SSD_u8WhichNumber=1;*/  SSD_u8_6_Num_1 ; }) \
  FUNC(Num2_6, {/*SSD_u8WhichNumber=2;*/  SSD_u8_6_Num_2 ; }) \
  FUNC(Num3_6, {/*SSD_u8WhichNumber=3;*/  SSD_u8_6_Num_3 ; }) \
  FUNC(Num4_6, {/*SSD_u8WhichNumber=4;*/  SSD_u8_6_Num_4 ; }) \
  FUNC(Num5_6, {/*SSD_u8WhichNumber=5;*/  SSD_u8_6_Num_5 ; }) \
  FUNC(Num6_6, {/*SSD_u8WhichNumber=6;*/  SSD_u8_6_Num_6 ; }) \
  FUNC(Num7_6, {/*SSD_u8WhichNumber=7;*/  SSD_u8_6_Num_7 ; }) \
  FUNC(Num8_6, {/*SSD_u8WhichNumber=8;*/  SSD_u8_6_Num_8 ; }) \
  FUNC(Num9_6, {/*SSD_u8WhichNumber=9;*/  SSD_u8_6_Num_9 ; })

/***************************Array of fuction in Nums in Disp 6****************************************/
//*/
#define FUNC(name, body) void name(void) body
SSD_u8Disp6Nums
#undef FUNC

const function SSD_u8Arr_6_Numbers[10] = {
#define FUNC(name, body) name,
SSD_u8Disp6Nums
#undef FUNC
};
//*/

#endif

/********************************Array of fuctions in Which Display will choose***********************************/

//const function SSD_u8ArrOfIndex[6]={SSD_u8Arr_1_Numbers,SSD_u8Arr_2_Numbers,SSD_u8Arr_3_Numbers,SSD_u8Arr_4_Numbers,SSD_u8Arr_5_Numbers,SSD_u8Arr_6_Numbers};
/********************************Array of fuction in Which Display will TurnOn***********************************/
///*
 #define FUNC(name, body) void name(void) body
SSD_u8TurnOnDisplay
#undef FUNC

const function SSD_u8ArrDispIdx[6] = {
#define FUNC(name, body) name,
SSD_u8TurnOnDisplay
#undef FUNC
};
//*/

/**************************Array of fuction in Which Display will TurnOFF*****************************************/
///*
 #define FUNC(name, body) void name(void) body
SSD_u8TurnOFFDisplay
#undef FUNC

const function SSD_u8ArrTurnOffIdx[6] = {
#define FUNC(name, body) name,
SSD_u8TurnOFFDisplay
#undef FUNC
};
//*/
/*******************************************************************/

/*Comment!:PORT,PIN And DDR address  */
#define PORTA_Address	(0x3B)
#define DDRA_Address	(0x3A)
#define PINA_Address	(0x39)

#define PORTB_Address	(0x38)
#define DDRB_Address	(0x37)
#define PINB_Address	(0x36)

#define PORTC_Address	(0x35)
#define DDRC_Address	(0x34)
#define PINC_Address	(0x33)

#define PORTD_Address	(0x32)
#define DDRD_Address	(0x31)
#define PIND_Address	(0x30)

/*Comment!:PORTA,PINA And DDRA   */
#define PORTA 	*((volatile u8*)PORTA_Address)
#define DDRA 	*((volatile u8*)DDRA_Address)
#define PINA 	*((volatile u8*)PINA_Address)

/*Comment!:PORTB,PINB And DDRB   */
#define PORTB 	*((volatile u8*)PORTB_Address)
#define DDRB 	*((volatile u8*)DDRB_Address)
#define PINB 	*((volatile u8*)PINB_Address)

/*Comment!:PORTC,PINC And DDRC   */
#define PORTC 	*((volatile u8*)PORTC_Address)
#define DDRC 	*((volatile u8*)DDRC_Address)
#define PINC 	*((volatile u8*)PINC_Address)

/*Comment!:PORTD,PIND And DDRD   */
#define PORTD 	*((volatile u8*)PORTD_Address)
#define DDRD 	*((volatile u8*)DDRD_Address)
#define PIND 	*((volatile u8*)PIND_Address)

/*******************************************************************/

#endif /* SSD_PRIVATE_H_ */
