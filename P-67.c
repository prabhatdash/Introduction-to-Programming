//Write a c program to create 1 dimensional array by taking size and elements from user and display it.
#include <stdio.h>
int main()
{
int size;
printf("Enter the size of the array:");
scanf("%d",&size);
int num[size];
for(int i=0;i<size;i++)
{
printf("Enter index element no:%d\n",i);
scanf("%d",&num[i]);
}
for(int i=0;i<size;i++)
{
printf("%d\t",num[i]);
}
}