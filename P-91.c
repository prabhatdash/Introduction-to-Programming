//Write a c program to print the length of array using sizeof function.
#include "stdio.h"
int main()
{
        int num[] = {7, 33, 13, 9, 29};
        int size = sizeof(num);
        printf("The size is %d bytes \n", size);
}