//Write a program in c to display the element from an array by taking the index position from the user.
#include <stdio.h>
int main()
{
int size,j;
printf("Enter the size of the array:");
scanf("%d",&size);
int num[size];
for(int i=0;i<size;i++)
{
printf("Enter index element no:%d\n",i);
scanf("%d",&num[i]);
}
printf("Enter the index no. :");
scanf("%d",&j);
printf("%d",num[j]);
}