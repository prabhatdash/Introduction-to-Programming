//Write a program in c to print the pattern
A
B B
C C C
D D D D
E E E E E
#include<stdio.h>
int main()
{
for(int i=0;i<=5;i++)
{
for(int j=0;j<i;j++)
{
printf("%c",'A'-1+i);
}
printf("\n");
}
}