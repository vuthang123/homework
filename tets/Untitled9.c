#include<stdio.h>
int main ()
{
	int ival = 1 ;
	int *ptr = &ival ;
	int get =*ptr = 5000
	 ;
	printf("%d",get );
	get = 2;
	printf("\n%d\n",get );
	printf("\n%x\n",&ival );
	printf("\n%x\n",ptr );
	printf("\n%x\n",&get );
	*ptr =20;
	int set = *ptr ;
	printf("\n%d\n",ival );
	printf("\n%d\n",*ptr );
	printf("\n%x\n",&set );
	*ptr= 1;
	printf("\n%d\n",ival );
	printf("\n%d\n",*ptr );
}
