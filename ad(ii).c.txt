//Write a program in c to demonstrate all the types of error part 2.
#include<stdio.h>
int main()
{
int a=20;
int b,c,d;
printf("Enter b\n");
scanf("%d",&b);
c=a/b;//Runtime Error.An user can give any value for b such as 0 which is not possible.
d=a+b*a;//Logical Error.Expected answer is 10 but we get logical error which gives the answer as 8.
} 
