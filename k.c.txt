//Write a program in c to make your own currency converter.
#include<stdio.h>
int main()
{
float ruppees;
printf("Enter the amount in Ruppees:\n");
scanf("%f",&ruppees);
printf("Amount in Dollars:%f\n",ruppees*0.012);
printf("Amount in Euros:%f\n",ruppees*0.011);
printf("Amount in Yans:%f\n",ruppees*1.77);
printf("Amount in Rubels:%f\n",ruppees*1.16);
}
