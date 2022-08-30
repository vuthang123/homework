#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>
#include "function.h"

bool check_byte(char *check, uint8_t byte);
void Open_File(FILE *fp);
void read_File(FILE *fp, char *check);
int doi_mang_so(char i);
int count_byte(FILE *fp ,  char *check);
void check_data_address(char *check, uint8_t byte )
