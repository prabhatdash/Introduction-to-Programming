//write a program in C to create a union inside a structure
#include <stdio.h>
int main()
{
    int rev,n,i;
    printf("Enter number of students >> ");
    scanf("%d",&n);
    struct cprog{
        char name[45];
        int ch;
        union {
            long int ph; //for phone number
            char email[50]; //for email id
        };
    }stu[n];

    for(i=0;i<n;i++) {
        printf("\nEnter name of student %d to link contact >> ",i+1);
        getchar();
        gets(stu[i].name);
        l1:
        printf("Enter :\n1. To enter phone number\n2. To enter email address \n");
        scanf("%d", &stu[i].ch);
        if (stu[i].ch == 1) {
            printf("\nEnter phone number >> ");
            scanf("%ld", &stu[i].ph);
            printf("\nDetails saved successfully !!!");
        } else if (stu[i].ch == 2) {
            printf("\nEnter email address >>");
            scanf("%s", &stu[i].email);
            printf("\nDetails saved successfully !!!");
        }else {
            printf("WRONG CHOICE !!! Please try again !");
            goto l1;
        }
    }
    printf("\nEnter 0 to view saved details , any other number to exit >> ");
    scanf("%d",&rev);

    if(rev==0) {
        for(i = 0;i < n;i++){
            printf("\nStudent %d name >> %s", i + 1, stu[i].name);
            if (stu[i].ch == 1)
                printf("\nLinked phone number is %ld", stu[i].ph);
            else if (stu[i].ch == 2)
                printf("\nLinked email address is %s", stu[i].email);
        }
    }
}