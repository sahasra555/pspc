#include <stdio.h>

int main()

{
    float basic, hra, da, gross;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    hra = basic * 20 / 100;
    da = basic * 10 / 100;

    gross = basic + hra + da;

    printf("Gross Salary = %f\n", gross);

    return 0;
    
}