#include <stdio.h>
#include "mylib.h"
int main() 
{
 float a, b, c;
    printf("Nhap he so bac 2, a = ");
    scanf("%f", &a);
    printf("Nhap he so bac 1, b = ");
    scanf("%f", &b);
    printf("Nhap so hang tu do, c = ");
    scanf("%f", &c);
    giaiPTBac2(a, b, c);
    return 1;
}
