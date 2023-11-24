//Smart bazaar, a subsidary of reliance, wants to store the following: product name, id and price. write a program in c to help reliance in storing the following details such that if they want to search a product via name or id, they should be able to get the details.
#include <stdio.h>
int main()
{
int ch,count=0;
char n[15];
long int d;
struct product
{
char name[15];
long int id;
float price;
};
struct product c[5]={"Tea",213421,50,"Coffee",715423,100,"Cadburry",213224,20,"Coke",215621,50,"Face Wash",657421,200};
printf("Enter the mode of search:\n");
printf("1. Name.\n");
printf("2. ID.\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
puts("Enter the name of the product:\n");
getchar();
gets(n);
for(int i=0;i<5;i++)
{
if((strcasecmp(c[i].name,n)==0))
{
printf("Name:%s\n",c[i].name);
printf("ID:%ld\n",c[i].id);
printf("Price:%f",c[i].price);
count++;
break;
}
}
if(count==0)
{
printf("WRONG CHOICE!");
}
break;
case 2:
printf("Enter the ID of the product:\n");
scanf("%ld",&d);
for(int i=0;i<5;i++)
{
if(c[i].id==d)
{
printf("Name:%s\n",c[i].name);
printf("ID:%ld\n",c[i].id);
printf("Price:%f",c[i].price);
count++;
break;
}
}
if(count==0)
{
printf("WRONG CHOICE!");
}
break;
}
}