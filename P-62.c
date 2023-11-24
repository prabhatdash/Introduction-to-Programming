//Write a c program by using the numerical-1,9,9 and 6 exactly in the order to make the following numericals:- 28,32,35,38,72,73,76,77,100,1000.
#include <stdio.h>
#include <math.h>
int main()
{
int a=1+9,b=9-6;
int s1=1+9+(sqrt(9)*6);
int s2=(1/(sqrt(9)))*96;
int s3=(-19)+(9*6);
int s4=19/((sqrt(9))/6);
int s5=(1+sqrt(9))*sqrt(9)*6;
int s6=19+(9*6);
int s7=1+pow(9,2)-6;
int s8=-19+96;
int s9=1+sqrt(9)+96;
int s10=pow(a,b);
printf("Numericals:\n");
printf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",s1,s2,s3,s4,s5,s6,s7,s8,s9,s10);
}