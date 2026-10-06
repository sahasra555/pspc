#include<stdio.h>

int main()

{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Is a greater than b AND b less than a? %d\n", (a > b) && (b < a));
    printf("Is a greater than b OR b less than a? %d\n", (a > b) || (b < a));
    printf("Is NOT a greater than b? %d\n", !(a > b));

    return 0;

}