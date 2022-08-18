#include <stdio.h>
#include "mylib.h"

int main()
{
	int a,b,*p1,*p2;
	char opera;
	printf("Enter an operator (+, -, *, /, %%): ");
    scanf("%c", &opera);
	printf("enter number a");
	scanf("%d",&a);
	printf("enter number b");
	scanf("%d",&b);
	p1=&a;
	p2=&b;
//	
	
//	printf("enter number a= %d",*p1);
//	printf("\nenter number b= %d",*p2);
	
	switch(opera)
	{
		case '+':
				
//				printf( "%d",sum);
				printf("\naddition or unary plus");
				printf( "%d+%d=%d",a,b,sum(&a,&b));
				break;
			
		case '-':
			
//				sub(a,b);
				printf("\nsubtraction or unary minus");
				printf( "%d-%d=%d",a,b,sub(&a,&b));
				break;
		case '*':
//				mul(a,b);
				printf("\nmultiplication");
				printf( "%d*%d=%d",a,b,mul(&a,&b));	
				break;
		case '/':
//				div(a,b);
				printf("\ndivision");
				printf( "%d/%d=%.7f",a,b,div(&a,&b));
				break;	
		case '%':
//				mod(a,b);
				printf("\nremainder after division ");
				printf( "%d %% %d=%d",a,b,mod(&a,&b));
				break;
				
		
	}
	
	return 0;
}

