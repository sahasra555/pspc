#include <stdio.h>
#include <math.h>

int main() 

{
    float a, b, c, A, B, C;

    printf("Enter three sides: ");
    scanf("%f %f %f", &a, &b, &c);

    A = acos((b*b + c*c - a*a) / (2*b*c)) * 180 / 3.14159;
    B = acos((a*a + c*c - b*b) / (2*a*c)) * 180 / 3.14159;
    C = 180 - A - B;

    printf("Angle A = %f\n", A);
    printf("Angle B = %f\n", B);
    printf("Angle C = %f\n", C);

    return 0;
    
}