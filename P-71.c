//Write a c program to multiply two 2-D array.
#include <stdio.h>
int main()
{
int r,c;
int matrix1[100][100];
int matrix2[100][100];
int result[100][100];
int i, j, k;
printf("Enter the number of rows: ");
scanf("%d", &r);
printf("Enter the number of columns: ");
scanf("%d", &c);
printf("Enter elements of the first matrix:\n");
for (i = 0; i < r; i++) 
{
for (j = 0; j < c; j++) 
{
printf("Enter the element in row-%d and column-%d :",i,j);
scanf("%d", &matrix1[i][j]);
}
}
printf("Enter elements of the second 2x2 matrix:\n");
for (i = 0; i < r; i++) 
{
for (j = 0; j < c; j++) 
{
printf("Enter the element in row-%d and column-%d :",i,j);
scanf("%d", &matrix2[i][j]);
}
}
for (i = 0; i < r; i++) 
{
for (j = 0; j < c; j++) 
{
result[i][j] = 0;
for (k = 0; k < 2; k++) 
{
result[i][j] += matrix1[i][k] * matrix2[k][j];
}
}
}
printf("Result of matrix multiplication:\n");
for (i = 0; i < r; i++) 
{
for (j = 0; j < c; j++) 
{
printf("%d ", result[i][j]);
}
printf("\n");
}
}