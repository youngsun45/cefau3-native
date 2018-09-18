#ifndef MYCUSTOM_TYPES
#define MYCUSTOM_TYPES
#pragma once

typedef unsigned char		byte;

typedef unsigned __int8		u8;
typedef unsigned __int16	u16;
typedef unsigned __int32	u32;
typedef unsigned __int64	u64;

typedef __int8				i8;
typedef __int16				i16;
typedef __int32				i32;
typedef __int64				i64;

typedef float				f32;
typedef double				f64;
typedef char				ch;
typedef void*				ptr;

typedef unsigned short		ushort;
typedef unsigned long		ulong;
typedef unsigned long long	ulonglong;
typedef long long			longlong;

#ifndef __cplusplus

#define bool	_Bool
#define false	0
#define true	1

#endif
#endif