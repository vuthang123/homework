#include<stdio.h>
int main ()
{
	int c= NULL;
	int *p=&c;
//	*p=30;
	printf("\n%x\n",&p );
	printf("\n%x\n",p );
	printf(" \n%x",&c);
	printf(" \n%d",*p);
	printf(" \n%d",c);
	float d=20.776879999;
	float *pfloat = &d ;
	printf(" \n%.10f",*pfloat);
	printf(" \n%x ",pfloat);
	printf(" \n%.10f\n\n\n",d);
	char m ='1';
	char *pchar = &m ;
	printf(" \n%c",*pchar);
	printf(" \n%x ",pchar);
	printf(" \n%c\n\n\n",m);	
	
	
	int ival ;
	*p=30.09;
	ival = *p;
	
	float ival1= *pfloat;
	int ival2= *pchar;
	
	printf(" \n%f",(float)ival);
	printf(" \n%d",(int)ival1);
	printf(" \n%c",ival2);
}
