//Write a program in c to check if the number is an armstrong number by using functions.
#include <stdio.h>
void armstrong(int n)
{
int originalNum=n,remainder,result=0;;
while (originalNum != 0) 
{
remainder = originalNum % 10;
result += remainder * remainder * remainder;
originalNum /= 10;
}
if (result == n)
printf("%d is an Armstrong number.", n);
else
printf("%d is not an Armstrong number.", n);
}
int main() 
{
int num; 
printf("Enter a three-digit integer: ");
scanf("%d", &num);
armstrong(num);
}