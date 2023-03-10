#ifndef SAKURA_TYPES_H
#define SAKURA_TYPES_H

// END OF FILE
#define EOF -1
// 空指针
#define NULL ((void *)0)

#define EOS '\0'

#define bool _Bool
#define true 1
#define false 0

// 用于定义特殊的结构体
#define _packed __attribute__((packed))

typedef unsigned int size_t;

typedef char        int8;
typedef short       int16;
typedef int         int32;
typedef long long   int64;

typedef unsigned char       uint8;
typedef unsigned short      uint16;
typedef unsigned int        uint32;
typedef unsigned long long  uint64;

#endif