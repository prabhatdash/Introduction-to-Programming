//Write a program to swap the values of variable a & b without using 3rd variable and + - operators.
#include<stdio.h>
int main()
{
int a,b;
printf("Enter the value of A and B:\n");
scanf("%d%d",&a,&b);
a=a*b;
b=a/b;
a=a/b;
printf("The new value of A:%d\n",a);
printf("The new value of B:%d\n",b);
}