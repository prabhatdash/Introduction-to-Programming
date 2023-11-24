//Write a c program to find the sum of n numbers using recurssion.
#include <stdio.h>
int sum(int a)
{
int x;
if(a==1)
{
return 1;
}
return x=a+sum(a-1);
}
int main() 
{
int n,c;
printf("Enter The Range 0f N Number=");
scanf("%d",&n);
c=sum(n);
printf("%d",c);
}