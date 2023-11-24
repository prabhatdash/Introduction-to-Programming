//Write a program in c to manually calculate the length of a string.
#include <stdio.h>
int main()
{
char str[100];
int length=0;
printf("Enter a string: \n");
scanf("%s",str);
for(int i=0; str[i]!='\0'; i++)
{
length++;
}
printf("Length of input string: %d",length);
}