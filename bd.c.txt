//Write a c program to convert a decimal number to binary number.
#include <stdio.h>
int main() 
{
int d,b= 0,i = 1,remainder;
printf("Enter a decimal number: ");
scanf("%d", &d);
while (d != 0)
{
remainder = d % 2;
d/= 2;
b+= remainder * i;
i*= 10;
}
printf("Binary number: %d\n",b);
}