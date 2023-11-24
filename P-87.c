//Write a program in c to implement queue data structure using array.
#include<stdlib.h>
#include<stdio.h>
int queue[5];
int front=-1;
int rear=-1;
void enqueue(int value) {
    if(rear==5)
        printf("\n Queue is Full");
    else
    {
        queue[rear++]=value;
    }
}
void dequeue()
{
    if (front == rear)
    {
        printf("Queue Underflows \n");
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue[front]);
        front++;
    }
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    printf("Queue is : \n");
    for (int i = front; i<rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
    dequeue();
    printf("Queue is : \n");
    for (int i = front; i<rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}