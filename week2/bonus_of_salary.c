#include <stdio.h>

int main()

{
    float salary, bonus, total;

    printf("Enter salary: ");
    scanf("%f", &salary);

    bonus = salary * 10 / 100;
    total = salary + bonus;

    printf("Bonus = %f\n", bonus);
    printf("Total Salary = %f\n", total);

    return 0;

}