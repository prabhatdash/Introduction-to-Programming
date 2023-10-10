//Write a program in c to check whether a line is straight line or not.
#include<stdio.h>
int main()
{
float y,m,x,c;
printf("Enter the values of Y,X,M and C:\n");
scanf("%f%f%f%f",&y,&x,&m,&c);
float a=(m*x)+c;
int sl=(y==a)?(y==a):(y==a);
printf("%d\n",sl);
}