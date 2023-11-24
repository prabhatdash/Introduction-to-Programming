//Write a c program to check whether a number is unique number or not.
#include<stdio.h>
int main() 
{
int n, num,r, k = 0, count = 1;
int arr[100];
printf("Enter a number:");
scanf("%d", &n);
num = n;
while (n > 0) 
{
r = n % 10;
arr[k] = r;
n = n / 10;
k++;
}
for (int i = 0; i < k; i++) 
{
for (int j = i + 1; j < k; j++) 
{
if (arr[i] == arr[j]) 
{
count = 0;
}
}
}
if (count == 1) 
{
printf("%d is unique.", num);
} 
else 
{
printf("%d is not unique.", num);
}
}