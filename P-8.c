//Write a program to find out the area of a circle.The circle's radius is user input.
#include<stdio.h>
int main()
{
int a,r;
float area;
printf("Enter the value of radius:\n");
scanf("%d",&r);
a=r*r;
area=3.14*a;
printf("The area of the circle is:%f\n",area);
}