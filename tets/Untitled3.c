#include<stdio.h>


void Sum(int a, int b);
void Sum(int a, int b)
{
	int sum =a+b;
	printf("Sum = %d", sum );
	
}
int thang =9 ;
int main ()
{
	int a =5;
	int b = 6;
	Sum(a,b);
//	thang = 9 ;
	printf("%d",thang++);
	
 } 
