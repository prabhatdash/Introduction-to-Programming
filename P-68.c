//Write a c program to create a 2 diamensional array by taking the no. of rows,columns and the elements from the user and display them.
#include <stdio.h>
int main()
{
int rows=0,cols=0;
printf("Enter the rows and the columns of the array:");
scanf("%d%d",&rows,&cols);
int num[rows][cols];
for(int i=0;i<rows;i++)
{
for(int j=0;j<cols;j++)
{
printf("Enter element in row :%d and column :%d\t",i,j);
scanf("%d",&num[i][j]);
}
}
for(int i=0;i<rows;i++)
{
for(int j=0;j<cols;j++)
{
printf("%d\t",num[i][j]);
}
printf("\n");
}
}