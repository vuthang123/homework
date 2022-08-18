#include <stdio.h>
#include "Factorial.h"

int Factorial(int a)	
{
	if(a==1)
	{
		return 1;
	}
	return a*Factorial(a-1);
	
}
