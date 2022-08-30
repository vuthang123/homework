/*******************************************************************************
* Include
*******************************************************************************/
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>
#include "function.h"

/*******************************************************************************
* Defination
*******************************************************************************/
FILE *fp;

/*******************************************************************************
* Code
*******************************************************************************/
/* Main function */
int main() {
    char check [200];
    uint8_t count_byte_1 = 0;
//    Open_File(fp);
    
	fp = fopen("blinkLed.txt","r+");
	if(fp == NULL)
	{
		printf(" NO open file \n ");
	}
	else 
	{
		printf(" open file \n");
	}
    read_File(fp, check);
    count_byte_1 = count_byte(fp , check);
    printf("%d \n",count_byte_1);
//   if( check_byte(check,count_byte_1))
//   {
//   		printf(" equal number of bytes\n");
//   }
//   else
//   {
//   		printf(" No equal number of bytes\n");
//   }
   check_data_address(check, count_byte_1 );
	fclose(fp);
}

/*******************************************************************************
* EOF
*******************************************************************************/
