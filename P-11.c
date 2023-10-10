//Write a program in c to make your own digital storage converter by taking the size in KB and convert it MB,GB and TB.
#include<stdio.h>
int main()
{
float KB;
printf("Enter the size in Kilo Bytes:\n");
scanf("%f",&KB);
printf("Size in Mega Bytes:%f\n",KB*0.001);
printf("Size in Giga Bytes:%f\n",KB*0.000001);
printf("Size in Tera Bytes:%f\n",KB*0.000000001);
}