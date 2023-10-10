//Write a program to swap the values of variable a & b.
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the value of A and B:\n");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("The new value of A:%d\n",a);
printf("The new value of B:%d\n",b);
}