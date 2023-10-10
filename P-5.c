//Write a program in c to swap the values of variable a & b without using 3rd variable.
#include<stdio.h>
int main()
{
int a,b;
printf("Enter the values of A and B:\n");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("The new value of A is:%d\n",a);
printf("The new value of B is:%d\n",b);
}