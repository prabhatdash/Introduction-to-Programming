//Write a program in c to print the memory addresses of 5 variables.
#include<stdio.h>
int main()
{
int a=10;
int b=20;
int c=30;
int d=40;
int e=50;
printf("%p\n",&a);
printf("%p\n",&b);
printf("%p\n",&c);
printf("%p\n",&d);
printf("%p\n",&e);
}