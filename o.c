//
// Created by Prabhat Das on 29/08/23.
//
#include<stdio.h>
int main(){
    double rupee;
    printf("ENTER THE AMOUNT IN RUPEES: \n");
    scanf("%lf",&rupee);
    printf("AMOUNT IN DOLLARS: %lf\n",rupee*0.0121);
    printf("AMOUNT IN EUROS: %lf\n",rupee*0.0112);
    printf("AMOUNT IN YEN: %lf\n",rupee*1.7719);
    printf("AMOUNT IN RUBEL: %lf\n",rupee*1.15);

}
