#include<stdio.h>

int top=-1;
int data[4];

 void push(int element){
     top++;
    data[top]=element;
}
void pop(){
     top--;
 }

int main(){
    push(5);
    push(10);
    push(12);
    push(15);

    pop();

    for(int i=0;i<=top;i++){
        printf("%d ",data[i]);
    }
}
