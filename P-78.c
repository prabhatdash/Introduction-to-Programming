//Write a program in c to demonstrate bubble sorting.
#include <stdio.h>
int main()
{
    int arr[]={20,2,30,50,40,60,80,80,9};
    int start=0;
    int stop=9;
    for(int i=0;i<stop;i++)
    {
       for(int j=0;j<stop-i-1;j++)
       {
           if(arr[j]>arr[j+1])
           {
               int temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
           }
       }
    }
    for(int i=0;i<stop;i++)
    {
        printf("%d\t",arr[i]);
    }
}