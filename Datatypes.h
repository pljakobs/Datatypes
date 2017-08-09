#ifndef _DTYPESH_
#define _DTYPESH_

#define IS_NUMERIC        1<<0
#define IS_INTEGER        1<<1
#define IS_FLOAT          1<<2
#define IS_SIGNED         1<<3
#define IS_8BIT           1<<4
#define IS_16BIT          1<<5
#define IS_32BIT          1<<6
#define IS_64BIT          1<<7
#define IS_CHAR           1<<8
#define IS_STRING         1<<9
#define IS_POINTER        1<<10
#define IS_CONST          1<<11
#define IS_SIZE_VARIABLE  1<<12

#include "Datatypes.c"

#endif
