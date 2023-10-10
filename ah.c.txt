//Write a program in c to check whether the temperature of water can reach boiling point.
#include<stdio.h>
int main()
{
float temp;
printf("Enter the temperature of water:\n");
scanf("%f",&temp);
if(temp>=100)
printf("The water has reached boiling point.");
else
printf("The water has not reached boiling point.");
}  