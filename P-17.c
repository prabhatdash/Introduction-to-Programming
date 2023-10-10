//Write a program in c to find out the Simple and Compound Interest.
#include<stdio.h>
int main()
{
float p,r,t,SI,CI,w,A,f,d,v;
printf("Enter the value of P,R and T:\n");
scanf("%f%f%f",&p,&r,&t);
v=p*r*t;
SI=v/100;
f=r/100;
d=1+f;
w=pow(d,t);
A=p*w;
CI=A-p;
printf("The required Simple and Compound Interest is:%f\t%f\n",SI,CI);
}
