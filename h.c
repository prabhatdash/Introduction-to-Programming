// WAP in C to calculate the area of a circle
#include <stdio.h>

int main() {
    float radius,area;
    
    printf("ENTER THE RADIUS:\n");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("THE AREA OF CIRCLE: %f",area);
}