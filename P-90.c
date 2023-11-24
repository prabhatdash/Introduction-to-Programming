//Write a c program to access elements of an array using pointers.
#include <stdio.h>
int main()
{
    int arry[5];
    int i;
    printf("Enter 5 elements for the array: ");
    for (i = 0; i < 5; ++i)
        scanf("%d", arry + i);
    int *ptr = arry;
    printf("You have entered \n");
    for(i = 0; i < 5; i++)
        printf("array[%d] = %d\n",i,*(ptr+i));
}