
#ifndef _TYPES_H_
#define _TYPES_H_

typedef unsigned short int u16;
typedef  		 short int s16;

typedef unsigned long int  u32;
typedef signed  long  int  s32;

typedef unsigned  	char    u8;
typedef signed   	char    s8;

typedef unsigned long long  int u64;
typedef   signed long long int  s64;

typedef  float 				   f32;
typedef  double				   d64;
/*Comment!:Array of Function  */

typedef void (*function)(void);
/*Comment!:Error or Ok  */
#define Error	0
#define Ok		1

#endif
