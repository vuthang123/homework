#include <stdio.h>
#include "mylib.h"

int sum(int *p1,int *p2)
{
	int sum; 
	sum = (*p1 + *p2);
	return (*p1 + *p2);
}

int sub(int *p1,int *p2)

{
	int sub; 
	sub = (*p1 - *p2);
	return (*p1 - *p2);
}

int  mul(int *p1,int *p2)
{
	int mul;
	mul = (*p1 * *p2);
	return (*p1 * *p2);
}

float  div(int *p1,int *p2)
{
//	float  div;
//	div = (*p1 / *p2);
//	return (float)(*p1 / *p2);
    return (float) *p1 / *p2;
}
	


int   mod(int *p1,int *p2)
{
	int mod=(*p1 % *p2);
	return  (*p1 % *p2);
}
