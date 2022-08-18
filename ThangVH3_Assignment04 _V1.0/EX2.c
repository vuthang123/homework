#include<stdio.h>
	

int AND(int a ,int b)
{
	printf("\nAND is %d",(a&b));
	return (a&b);
}
int OR(int a ,int b)
{
	printf("\nAND is %d",(a|b));
	return (a|b);
}
int XOR(int a,int b)
{
	printf("\nAND is %d",(a^b));
	return (a^b);
}


int Dec_bi(int x)
{
	if(x==0) 
		return 0;
	else
	{
		int s=x%2;
		Dec_bi(x/2);
		printf("%d",s);
	}
 }


void  main()
{
	int a ;
	int b ;
	printf("Nhap a");
	scanf("%d",&a);
	printf("binary a \n");
	Dec_bi(a);
	
	printf("\nNhap b");
	scanf("\n%d",&b);
	printf("binary b \n");
	Dec_bi(b);
	
	
	AND(a,b);
	OR(a,b);
	XOR(a,b);
}
