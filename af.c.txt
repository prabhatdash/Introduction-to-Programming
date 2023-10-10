//Write a program in c to check if the character entered by the user is an upper case character or lower case character.
#include<stdio.h>
int main()
{
char ch;
int lc,uc;
printf("Enter a Character:\n");
scanf("%c",&ch);
if(ch>='A'&&ch<='Z')
printf("The character entered is in uppercase");
else
printf("The character entered is in lowercase");
}
 