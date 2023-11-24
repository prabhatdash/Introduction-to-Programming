//Write a c program to find the area of circle using recursive function by taking radius as user input. If r=0, the program should stop.
#include<stdio.h>
void area(int r)
{
int m;
if(r==0)
{
printf("STOP!");
}
else
{
printf("Area Is = %f\n",3.14*r*r);
printf("Enter New Radius:\n");
scanf("%d",&m);
area(m);
}
}
int main()
{
int radius;
printf("Enter The Radius:\n");
scanf("%d",&radius);
area(radius);
return 0;
}