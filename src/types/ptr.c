#include "../cefau3.h"

void CEFCALLBACK IntPtr_Set(int *self, int value)
{
	*self = value;
}

int CEFCALLBACK IntPtr_Get(int *self)
{
	return *self;
}

void CEFCALLBACK LongPtr_Set(long *self, long value)
{
	*self = value;
}

long CEFCALLBACK LongPtr_Get(long *self)
{
	return *self;
}

void CEFCALLBACK DoublePtr_Set(double *self, double value)
{
	*self = value;
}

double CEFCALLBACK DoublePtr_Get(double *self)
{
	return *self;
}