//Write a c program to check whether 2 numbers are amicable or not.
#include<stdio.h>
int main()
{
int n1,n2,DivSum1=0,DivSum2=0;
printf("Enter the numbers:");
scanf("%d%d",&n1,&n2);
for(int i=1;i<n1;i++)
{
if(n1 % i == 0)
DivSum1 = DivSum1 + i;
}
for(int i=1;i<n2;i++)
{
if(n2 % i == 0)
DivSum2= DivSum2+ i;
}
if((n1== DivSum2) && (n2 == DivSum1))
printf("%d and %d are Amicable numbers\n",n1,n2);
else
printf("%d and %d are not Amicable numbers\n",n1,n2);
}
