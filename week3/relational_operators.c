#include<stdio.h>

int main()

{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Is a greater than b? %d\n", a > b);
    printf("Is a less than b? %d\n", a < b);
    printf("Is a equal to b? %d\n", a == b);
    printf("Is a not equal to b? %d\n", a != b);
    printf("Is a greater than or equal to b? %d\n", a >= b);
    printf("Is a less than or equal to b? %d\n", a <= b);

    return 0;

}   