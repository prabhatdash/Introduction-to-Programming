//Write a c program to check the repetition of a number in an array.
//Program in C to check the repitition of a number in an array
#include<stdio.h>
int main() {
    int i, n,s,count=0;
    printf("Enter number of elements >> ");
    scanf("%d", &n);
    int num[n];
    for (i = 0; i < n; i++) {
        printf("Enter element %d >> ", i);
        scanf("%d", &num[i]);
    }
    for (i = 0; i < n; i++) {
        printf("%d ", num[i]);

    }
    printf("\nEnter element to be searched >> ");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(num[i]==s)
            count++;
    }
    printf("The number %d appears %d number of times in the array ",s,count);
}