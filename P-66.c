//Write a c program to demonstrate tree recursion.
#include <stdio.h>
void Tree(int n) 
{
if (n > 0) 
{
printf("%d\t", n);
Tree(n - 1);
Tree(n - 1);
}
}
int main()
{
int n = 3; 
Tree(n);
}