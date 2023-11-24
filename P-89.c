//write a Program in C to create a file
#include<stdio.h>
int main() {
    char fname[100];
    printf("Enter file name to be created >> ");
    gets(fname);

    FILE *fp;
    fp=fopen(fname, "w");
    printf("File successfully created !!! ") 
    fclose(fp);
}