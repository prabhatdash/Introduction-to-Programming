//Write a program in c to check whether a triangle is right angled triangle or not.
#include<stdio.h>
#include<math.h>
int main()
{
float h,hy,b,a,c,d,v;
printf("Enter the values of H,HY and B:\n");
scanf("%f%f%f",&h,&hy,&b);
a=pow(h,2);
c=pow(b,2);
d=a+c;
v=sqrt(d);
int ab=(hy==v)?(hy==v):(hy==v);
printf("%d\n",ab);
}
