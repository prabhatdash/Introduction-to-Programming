//Write a program in c to concantinate four stings together using string function.
#include <stdio.h>
#include <string.h>
int main()
{
char str1[50],str2[50],str3[50],str4[50];
printf("Enter the strings: \n");
scanf("%s%s%s%s",&str1,&str2,&str3,&str4);
strcat(str1,str2);
strcat(str3,str4);
strcat(str1,str3);
printf("%s",str1);
}