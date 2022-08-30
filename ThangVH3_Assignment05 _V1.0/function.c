/*******************************************************************************
* INCLUDE
******************************************************************************/
#include <stdio.h>
#include <stdint.h>
#include "function.h"
#include <stdbool.h>


/*******************************************************************************
* DEFINITION
*******************************************************************************/

/*******************************************************************************
* PROTOTYPES
******************************************************************************/

/*******************************************************************************
* CODE
******************************************************************************/
/* function is used to compare string  */

void Open_File(FILE *fp)
{
	fp = fopen("blinkLed.txt","r+");
	if(fp == NULL)
	{
		printf(" NO open file \n ");
	}
	else 
	{
		printf(" open file \n");
	}
}
void read_File(FILE *fp, char *check)
{     
     char *check_1 ;
     char key ;
	 uint8_t i = 0;
	    while(key != 10  )
		{   key = fgetc(fp);
		 	++i;
		}
		fseek(fp, -(i + 1), 1);
		fgets( check, i, fp);
		printf("%s\n",check);	
	    
}
int doi_mang_so(char i)
{   char check_1 = i;
    int check = 0;
	switch(check_1)
			{   
				case 'A':
				{
					 check = 10 ;
					break;
				}
				case 'B':
				{
					 check = 11 ;
					break;
				}
				case 'C':
				{
					 check = 12 ;
					break;
				}
				case 'D':
				{
					 check = 13 ;
					break;
				}
				case 'E':
				{
					 check = 14 ;
					break;
				}
				case 'F':
				{
					 check = 15 ;
					break;
				}
				default :
				{
					
				  check = (check_1 - 48);
				}
				
			}
	return check;
}
int count_byte(FILE *fp ,  char *check)
{ 
   uint8_t y = 0;
   uint8_t count_byte = 0;	
	for(y = 2; y<=3 ; y++)
	{ count_byte += doi_mang_so(check[y])*pow(16,(3-y));

    }
 return count_byte;
}
bool check_byte(char *check, uint8_t byte)
{   Bool retVal = FALSE; 
	uint8_t byte_count = (byte << 1);
	uint8_t count = 0;
	uint8_t i = 0;
	for(i = 4 ; check[i] != '\0' ;i++)
	{
		++count;
	}
	if(byte_count == count)
	{
		retVal = TRUE; 
	}
	else 
	{
		retVal = FALSE;
	}
	return retVal;
}
void check_data_address(char *check, uint8_t byte )
{    uint8_t i = 0;
	 uint32_t c = 0;
	 uint32_t arry[] = {0};
	if(check_byte(check, byte))
	{

		for(i = 2 ; i <= (byte<<1) ;++i)
		{	
		  c +=  (doi_mang_so(check[(i + 1)]) + doi_mang_so(check[i])*16 );
		  ++i;
		}
		printf("%d",c);
		for( i = 0 , i <= 8 ; i++ )
		{
			arr[0] = (c%2);
			c = (c/2);
		}
		
	}
}
/*******************************************************************************
* EOF
******************************************************************************/
