#include "../cefau3.h"

void __stdcall IntPtr_Set(int *self, int value)
{
	*self = value;
}

int __stdcall IntPtr_Get(int *self)
{
	return *self;
}

void __stdcall LongPtr_Set(long *self, long value)
{
	*self = value;
}

long __stdcall LongPtr_Get(long *self)
{
	return *self;
}

void __stdcall DoublePtr_Set(double *self, double value)
{
	*self = value;
}

double __stdcall DoublePtr_Get(double *self)
{
	return *self;
}