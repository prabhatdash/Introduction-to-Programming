//Write a program in C to create a union.
#include <stdio.h>
int main()
{
    int ch,rev;
    union test {
        long int ph; //for phone number
        char email[50]; //for email id
    }data;
    printf("Enter :\n1. To enter phone number\n2. To enter email address \n");
    scanf("%d",&ch);
    if (ch==1)
    {
        printf("\nEnter phone number >> ");
        scanf("%ld",&data.ph);
        printf("\nDetails saved successfully !!!");
    }
    else if(ch==2)
    {
        printf("\nEnter email address >>");
        scanf("%s",&data.email);
        printf("\nDetails saved successfully !!!");
    }
    else
        printf("WRONG CHOICE !!!");
    printf("\nEnter 0 to view saved details , any other number to exit >> ");
    scanf("%d",&rev);
    if(rev==0) {
        if (ch == 1)
            printf("Entered phone number is %ld", data.ph);
        else if (ch == 2)
            printf("Entered email address is %s", data.email);
    }
}