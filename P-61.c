//Write a c program to calculate the logarithm value of a numerical constant by taking the value as an input from the user.
#include <stdio.h>
#include <math.h>
int main()
{
double n,result;
printf("Enter Number:");
scanf("%lf",&n);
result = log(n);
printf("The Logarithm of %.2lf is %lf\n",n, result);
}