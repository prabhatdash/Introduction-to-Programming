//Write a program in c to print the multiplication table of n.
#include<stdio.h>
int main()
{
int n;
printf("Enter the range:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
for(int j=1;j<=10;j++)
{
printf("%d * %d=%d\n",i,j,i*j);
}
printf("--------------------\n");
}
}
