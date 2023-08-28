// WAP in C to convert Celsius into Fahrenheit.
#include <stdio.h>

int main() {
    float celcius,f;
    printf("ENTER TEMP IN CELCIUS:\n");
    scanf("%f",&celcius);
    f=(celcius*9/5)+32;
    printf("TEMPERATURE IN F: %f",f);
}