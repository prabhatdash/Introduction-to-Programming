//Write a program in c to add two 2-D array and display it.
#include <stdio.h>
int main() 
{
int r,c;
int a[100][100];
int b[100][100];
int sum[100][100];
printf("Enter the number of rows: ");
scanf("%d", &r);
printf("Enter the number of columns: ");
scanf("%d", &c);
printf("Enter elements of 1st matrix:\n");
for (int i = 0; i < r;i++)
{
for (int j = 0; j < c;j++) 
{
printf("Enter element a%d%d: ", i,j);
scanf("%d", &a[i][j]);
}
printf("Enter elements of 2nd matrix:\n");
for (int i = 0; i < r;i++)
{
for (int j = 0; j < c;j++) 
{
printf("Enter element b%d%d: ", i, j);
scanf("%d", &b[i][j]);
}
for (int i = 0; i < r; ++i)
{
for (int j = 0; j < c; ++j) 
{
sum[i][j] = a[i][j] + b[i][j];
}
printf("Sum of two array: \n");
for (int i = 0; i < r; ++i)
{
for (int j = 0; j < c; ++j) 
{
printf("%d   ", sum[i][j]);
if (j == c - 1) 
{
printf("\n");
}
}
}