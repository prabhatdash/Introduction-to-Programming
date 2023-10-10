//Write a program in c to calculate the area of triangle using Haron's formula.
#include<stdio.h>
#include<math.h>
int main()
{
float s,a,b,c,area,e,f,g,h;
printf("Enter the values of A,B and C:\n");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
e=s-a;
f=s-b;
g=s-c;
h=s*e*f*g;
area=sqrt(h);
printf("Area of triangle is:%f\n",area);
}