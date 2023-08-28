// WAP in C to swap 2 numbers without using 3rd variable and +,- Operator.
#include <stdio.h>

int main() {
   int a=5;
   int b=20;
   a=a*b;
   b=a/b;
   a=a/b;
   printf("THE VALUE OF A IS: %d\n",a);
   printf("THE VALUE OF B IS: %d\n",b);
}