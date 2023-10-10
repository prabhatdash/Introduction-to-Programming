//Write a program in c to find the HCF of 2 numbers
#include<stdio.h>
int main()
{
int a,b,hcf=1;
printf("Enter A and B:");
scanf("%d%d",&a,&b);
for(int i = 1; i <=a || i <= b; i++) 
{
if(a % i == 0 && b % i == 0)
hcf = i;
}
printf("The HCF: %d", hcf);
}