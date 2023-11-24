//Write a program in c to check whether a number is friendly number or not.
#include <stdio.h>
int friendly(int num)
{
int sum = 0;
for(int i = 1; i < num; i++)
{
if(num % i == 0)
sum = sum + i;
}
return sum;
}
int main ()
{
int num1,num2;
printf("Enter First Number:");
scanf("%d",&num1);
printf("Enter Second Number:");
scanf("%d",&num2);
int sum1 = friendly(num1);
int sum2 = friendly(num2);
if(sum1/num1 == sum2/num2)
printf("%d and %d are friendly pairs", num1, num2);
else
printf("%d and%d are not friendly pairs", num1, num2);
}