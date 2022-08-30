#include <stdio.h>

//#include "FUNCTION.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() 
{
	int evenNumber ;
    int oddNumber  ;
	printf("Enter evenNumber oldNumber ");
	scanf("%d%d", &evenNumber,&oddNumber);
    
    printf("evenNumber: %d, oddNumber : %d\n", evenNumber, oddNumber);
    
	swap(&evenNumber, &oddNumber);
    
	printf("evenNumber: %d, oddNumber : %d\n", evenNumber, oddNumber);

	return 0;
}
