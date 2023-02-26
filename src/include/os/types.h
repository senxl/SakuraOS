#ifndef OS_TYPES_H
#define OS_TYPES_H

#define EOF -1 // END OF FILE

#define NULL ((void *)0) // 空指针

#define bool _Bool
#define true 1
#define false 0

// 用于定义特殊的结构体
#define _packed __attribute__((packed))

//typedef unsigned int size_t;

typedef char        int8;
typedef short       int16;
typedef int         int32;
typedef long long   int64;

typedef unsigned char       uint8;
typedef unsigned short      uint16;
typedef unsigned int        uint32;
typedef unsigned long long  uint64;

#endif