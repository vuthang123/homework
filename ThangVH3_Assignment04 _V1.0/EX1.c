#include<stdio.h>


int setbit4(int n,int k)
{
	int set=(n >> k);
	return ( set << 4 )	;
}
int setbit2(int n,int k)
{

	return ( (n << k) |1);
}
int main()
{
	int n,k;
	printf("Nhap N");
	scanf("%d",&n);
	printf("Nhap K");
	scanf("%d",&k);

	while (k < 1|| k >32);
	{
		printf("DAO BIT THU 4 (1 XUONG 0) = %d",setbit4(n,k));
		printf("\nDAO BIT THU 2 (0 XUONG 1) = %d",setbit2(n,k));
	}
	
	
}
