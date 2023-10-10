//Write a program in c to count the number of digits in a number.
#include <stdio.h>
int main() 
{
int n;
int count = 0;
printf("Enter an integer: ");
scanf("%d", &n);
do 
{
n /= 10;
++count;
}
while (n != 0);
printf("Number of digits: %d", count);
}
