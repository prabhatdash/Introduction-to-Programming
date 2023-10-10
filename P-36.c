//Write a program in c by taking four numbers and find the largest number using and operator.
#include<stdio.h>
int main()
{
int a,b,c,d;
printf("Enter the numbers:\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
if((a>b)&&(a>c)&&(a>d))
printf("The largest number is:%d",a);
if((b>a)&&(b>c)&&(b>d))
printf("The largest number is:%d",b);
if((c>a)&&(c>b)&&(c>d))
printf("The largest number is:%d",c);
if((d>a)&&(d>b)&&(d>c))
printf("The largest number is:%d",d);
}