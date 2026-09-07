#include <stdio.h>

int main() 

{
    float principal, rate, time, simpleinterest;

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    simpleinterest = (principal * rate * time) / 100;

    printf("Simple Interest = %f\n", simpleinterest);

    return 0;
    
}