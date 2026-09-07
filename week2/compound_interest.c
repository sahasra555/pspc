#include <stdio.h>
#include <math.h>

int main()

{
    float principal, rate, time, amount, compoundinterest;

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    amount = principal * pow(1 + rate / 100, time);
    compoundinterest = amount - principal;

    printf("Compound Interest = %f\n", compoundinterest);

    return 0;


}