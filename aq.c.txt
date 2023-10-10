//Write a program in c to find the factorial of n.
#include<stdio.h>
int main()
{
int a=1,n;
printf("Enter a number:");
scanf("%d",&n);
while(n>0)
{
a*=n;
n--;
}
printf("The factorial of the number %d is:%d",n,a);
}
