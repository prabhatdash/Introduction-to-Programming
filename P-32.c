//Write a program in c to check whether the character entered by the user is a vowel or not.
#include<stdio.h>
int main()
{
char ch;
int lc,uc;
printf("Enter a Character:\n");
scanf("%c",&ch);
lc=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
uc=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
if(lc||uc)
printf("The character entered is a vowel");
else
printf("The character entered is a consonant");
}
 