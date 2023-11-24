//Write a c program to implement all string functions.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50],str2[50],str3[50],str4[50];
    printf("Enter string 1 : \n");
    gets(str1);
    printf("Enter string 2 : \n");
    gets(str2);
    printf("Full Length of string 1  >> %d\n",strlen(str1));
    printf("Length of string 2 upto 10 >> %d\n ",strnlen(str2,7));
    strcpy(str3,str1);
    strcat(str1,str2);
    printf("Full concatanation of string 1 and 2 >> %s \n",str1);
    strcpy(str1,str3);
    strncat(str1,str2,5);
    strcpy(str1,str3);
    printf("concatanation of string 1 and 2 upto 5 charecters >> %s \n",str3);
    printf("comparing string 1 with 2 >> %d \n",strcmp(str1,str3));
    printf("comparing first 3 charecters of string 1 and 2 >> %d \n",strncmp(str1,str2,3));
    strcpy(str4,str1);
    printf("copying the string one to another variable >> %s\n",str4);
    strncpy(str4,str2,4);
    printf("copying the first 4 charecters of string one to another variable >> %s\n",str4);
    char *ch;
    printf("Enter a character:");
    scanf("%c",&(*ch));
    printf("The charecter %c first occurs in index :%d in string 1",*ch,strchr(str1,*ch));
    printf("The charecter %c last occurs in index :%d in string 1",ch,strrchr(str1,*ch));
    printf("Enter a substring:");
    gets(str4);
    strstr(str2,str4);
    printf("searching substring in string 1 >> ");
    strnstr(str4,str4,5);
    printf("searching substring in string 1 upto 5 charecters >>");
    printf("Comparing string 1 with 2 ignoring case >> %d",strcasecmp(str1,str2));
    printf("Comparing string 1 with 2 upto 5 charecters  ignoring case >> %d",strncasecmp(str1,str2,5));

}