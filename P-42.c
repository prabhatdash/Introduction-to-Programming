//Write a program in c to take any keyboard input from the user to determine its data type.
#include <stdio.h>
#include <ctype.h>
int main() {
char a;
int p,q,r,s;
printf("Enter a character:");
scanf("%c",&a);
p=isdigit(a);
q=isalpha(a);
r=ispunct(a);
s=isspace(a);
if(p==1){
printf("The character %c entered is a digit",a);
}
else if(q==1){
printf("The character %c entered is a alphabet ",a);
}
else if(r==1){
printf("The character %c entered is a punctuation character ",a);
}
else if(s==1)
{
printf("The character %c entered is space ",a);
}
else
{
printf("WRONG CHOICE!");
}
}