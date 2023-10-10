//Write a program print fibonacci series in a pattern.
#include<stdio.h>
int main()
{
int row,temp1=1,temp2=1,backup=0;
printf("Limit:\n");
scanf("%d",&row);
for(int i=0;i<=row;i++)
{
for(int j=0;j<temp1;j++)
{
printf("* ");
}
printf("\n");
backup=temp2;
temp2=temp1+temp2;
temp1=backup;
}
}
