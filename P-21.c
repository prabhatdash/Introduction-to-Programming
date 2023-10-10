//Write a program in c to check whether a number odd or even.
#include<stdio.h>
int main()
{
int a,b;
printf("Enter the value of A:\n");
scanf("%d",&a);
b=a%2;
if(b==0)
printf("A is even");
else 
printf("A is odd");
}