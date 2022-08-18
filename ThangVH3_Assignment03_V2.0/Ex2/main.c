#include <stdio.h>
#include <string.h>
int main() {
//	declare string
	char s1[100];
	printf("enter string 1 \n");
	gets(s1);
	char s2[100];
	printf("enter string 2 \n");
	gets(s2);
	
	
//	length string
	int string1 = strlen(s1);
	printf("enter string %d",string1);
	int string2 = strlen(s2);
	printf("\nenter string %d",string2);
	
//	compare string
	if(string1 != string2)
		{
//			printf("\n%d not equal to %d",string1,string2);
			if(string1 > string2)
			{
				printf("\n%d is greater than to %d",string1,string2);	
			}
			else 
			{
				printf("\n%d Less than to %d",string1,string2);
			}
		}
		else
		{
			printf( " \n%d is equal to string %d" , string1,string2);	
		}	
		return 0;
}
