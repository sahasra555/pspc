#include<stdio.h>

int main()

{

    int a,b;
    float c;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Addition of a and b is: %d\n", a + b);

    printf("Subtraction of a and b is: %d\n", a - b);

    printf("Multiplication of a and b is: %d\n", a * b);

    c= (float)(a/b);

    printf("Division of a and b is: %f\n", c);

    printf("Modulus of a and b is: %d\n",a%b);

    return 0;
}