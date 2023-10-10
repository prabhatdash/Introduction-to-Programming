//Write a program in c to find the distance between 2 points.
#include<stdio.h>
#include<math.h>
int main()
{
float x1,x2,y1,y2,d,e,f,g,h,a;
printf("Enter the values of X_1,X_2,Y_1 and Y_2:\n");
scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
e=x2-x1;
f=y2-y1;
g=pow(e,2);
h=pow(f,2);
a=g+h;
d=sqrt(a);
printf("Distance:%f\n",d);
}