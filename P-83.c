//Write a c program to perform modify the data in a file by taking user input.
#include <stdio.h>

int main()
{
    char file_name[100],user_data[100];
    printf("Enter file name:\n");
    gets(file_name);
    FILE *fp;
    fp=fopen(file_name,"w");
    if(fp!=NULL)
    {
        printf("FILE FOUND!\n");
        printf("Enter something to be saved in file:\n");
        gets(user_data);
        fprintf(fp,"%s",user_data);
        printf("Data saved in file");
        fclose(fp);
    }
    else
    {
        printf("FILE NOT FOUND!");
    }
}