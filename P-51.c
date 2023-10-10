//Write a program in c to print Hello World for n number of times without using any loop if -1 is encountered,stop the program
#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
l1:
if(n!=-1) {
printf("Hello World");
goto l1;
}
else
printf("Stop!");
}
