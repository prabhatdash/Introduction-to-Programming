//Write a program in c to read data from a file and display.
#include <stdio.h>
int main()
{
    FILE *fp;
    char data[100];
    fp= fopen("sample.txt","r");
    if(fp!=NULL)
    {
        printf("FILE OPENED!");
        fgets(data,100,fp);
        printf("%s",data);
    }
    else
    {
        printf("ERROR!");
    }
}
