#include<stdio.h>
int main(){
    float a,b,c;
    printf("ENTER THE VALUE OF a:\n");
    scanf("%f",&a);
    printf("ENTER THE VALUE OF b:\n");
    scanf("%f",&b);
    printf("ENTER THE VALUE OF c:\n");
    scanf("%f",&c);
    float sl_13;
    sl_13=(a*a*a)+(b*b*b)+(c*c*c)-3*a*b*c;
    printf("THE VALUE OF 13 NO IDENTITY IS: %f",sl_13);

}