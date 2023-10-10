//Write a program in c to print the palindrome pyramid
#include <stdio.h>
int main()
{
int i, j, a=0;
for(i=1;i<=4;i++)
{
for(j=i;j<4;j++)
{
printf (" ");
}
for(j=1;j<=i;j++)
{
++a;
printf("%d",a);
}
a--;
for(j=1;j<i;j++)
{
printf ("%d",a);
a--;
}
printf ("\n");
a++;
}
}