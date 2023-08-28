// WAP in c to take the Name, Program, e-Mail ID, Birth year of the student and calculate the age and display all the details.
#include <stdio.h>

int main() {
    char name[50];
    char prog[30];
    char email[50];
    int year;
    
    printf("ENTER NAME:\n");
    scanf("%s",name);
    printf("ENTER PROGRAM:\n");
    scanf("%s",prog);
    printf("ENTER E-MAIL\n");
    scanf("%s",email);
    printf("ENTER BIRTH YEAR\n");
    scanf("%d",&year);
    
    printf("----------------\n");
    printf("YOUR NAME: %s\n",name);
    printf("YOUR PROGRAME: %s\n",prog);
    printf("YOUR EMAIL: %s\n",email);
    printf("YOUR AGE: %d\n",2023-year);
    
}
