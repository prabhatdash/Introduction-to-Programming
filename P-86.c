//wap in c to implement stack data structure using array
#include<stdio.h>
int data[5];
int top=-1;
void push(int value)
{
    if(top>4)
        printf("\nStack Overflows insertion not possible");
    else{
        top++;
        data[top] =value;
    }
}
void pop()
{
    if(top == -1)
        printf("\nStack Underflows deletion is not possible.");
    else{
        printf("\nDeleted : %d", data[top]);
        top--;
    }
}
int main()
{
    push(20);
    push(10);
    push(30);
    push(40);
    push(45);
    printf("\nStack elements are:");
    for(int i=0;i<=top;i++)
    {
        printf("\n%d",data[i]);
    }
    pop();
    printf("\nNew Stack elements are:");
    for(int i=0;i<=top;i++)
    {
        printf("\n%d",data[i]);
    }
}