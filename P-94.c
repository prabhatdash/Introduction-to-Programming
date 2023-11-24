//Write a program in c to read data from a file and display.
#include <stdio.h>
int main()
{
    FILE *fp;
    char file_name[100],data[100];
    printf("Enter the file name:");
    gets(file_name);
    fp= fopen(&file_name,"r");
    if(fp!=NULL)
    {
        printf("FILE OPENED!\n");
        fgets(data,100,fp);
        printf("%s",data);
    }
    else
    {
        printf("ERROR!");
    }
}