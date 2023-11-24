//Write a c program to add 2 complex numbers using structures.
#include<stdio.h>
int main()
{
struct complex
{
int real;
int imaginary;
}c1,c2,c3;
c1.real=10,c1.imaginary=20;
c2.real=15,c2.imaginary=30;
c3.real=c1.real+c2.real;
c3.imaginary=c1.imaginary+c2.imaginary;
printf("The Complex Number is: %d+%di",c3.real,c3.imaginary);
}