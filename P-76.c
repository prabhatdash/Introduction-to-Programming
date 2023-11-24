//Write a c program to demonstrate array of structures
#include <stdio.h>
 int main()
{
struct employee 
{
char name[100];
int age;
float salary;
};
struct employee em[10];
int counter, index, count, totalSalary;
printf("Enter Number of Employees\n");
scanf("%d", &count);
for(counter=0; counter<count; counter++)
{ 
printf("Enter Name of Employee\n");
getchar();
gets(em[counter].name);
printf("Enter the Age and Salary of Employee\n");
scanf("%d %f", &em[counter].age, &em[counter].salary);
}
printf("Average Salary of an Employee is %f\n", 
(float)totalSalary/count);
}