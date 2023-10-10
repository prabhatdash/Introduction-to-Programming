//Write a program in c to print the sum of numbers.
#include<stdio.h>
int main()
{
int n,s;
printf("Enter the value of n:");
scanf("%d",&n);
s=n*(n+1)/2;
printf("The required sum is:%d",s);
}