#include <stdio.h>
#include "FUNCTION.h"

void swap(int *evenNumber, int *oddNumber)
 {
 	int temp;
    temp = *evenNumber;
    *evenNumber = *oddNumber;
    *oddNumber  = temp;
}

