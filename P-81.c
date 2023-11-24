//Write a program in c to check if a file exists or not.
#include <stdio.h>
int main()
{
    FILE *fp;
    fp= fopen("sample.txt","r");
    if(fp!=NULL)
    {
        printf("FILE OPENED!");
    }
    else
    {
        printf("FILE NOT FOUND!");
    }
}