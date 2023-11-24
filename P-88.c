//Write a program in c to delete an element from an array.
#include <stdio.h>
int main()
{
    int data[5]={10,15,2,4,7};
    int index;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",data[i]);
    }
    printf("\nEnter Index Position Whose Value Is To Be Deleted:");
    scanf("%d",&index);
    for (int i = index; i < 5;i++)
    {
        data[i]=data[i+1];
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d\t",data[i]);
    }
}