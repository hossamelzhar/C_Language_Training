#ifndef _PLATEFORM_TYPES_H
#define _PLATEFORM_TYPES_H

#define CPU_8  8
#define CPU_16 16
#define CPU_32 32
#define CPU_64 64

#define CPU_TYPE CPU_64

#if  (CPU_TYPE == CPU_64)
typedef unsigned char boolean;
typedef unsigned char   uint8;
typedef unsigned short uint16;
typedef unsigned int   uint32;
typedef float         float32;
typedef double        float64;

typedef signed char  sint8;
typedef signed short sint16;
typedef signed int   sint32;
#elif(CPU_TYPE == CPU_32)
typedef unsigned char boolean;
typedef unsigned char   uint8;
typedef unsigned short uint16;
typedef unsigned int   uint32;
typedef float         float32;
typedef double        float64;

typedef signed char  sint8;
typedef signed short sint16;
typedef signed int   sint32;
#elif(CPU_TYPE == CPU_16)
typedef unsigned char boolean;
typedef unsigned char   uint8;
typedef unsigned short uint16;
typedef unsigned long   uint32;
typedef float         float32;
typedef double        float64;

typedef signed char  sint8;
typedef signed short sint16;
typedef signed long   sint32;
#elif(CPU_TYPE ==  CPU_8)
typedef unsigned char boolean;
typedef unsigned char   uint8;
typedef unsigned int uint16;
typedef float         float16;


typedef signed char  sint8;
typedef signed int sint16;

#endif

#endif // _PLATEFORM_TYPES_H

