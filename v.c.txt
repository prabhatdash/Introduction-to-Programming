//Write a program in c to input 2 number and find the larger among the two.
#include<stdio.h>
int main()
{
int a,b;
printf("Enter the value of A and B:\n");
scanf("%d%d",&a,&b);
if(a>b)
printf("A is greater");
else 
printf("B is greater");
}