#include<stdio.h>

int main()

{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Is a greater than b AND a less than b? %d\n", (a > b) && (a < b));
    printf("Is a greater than b OR a less than b? %d\n", (a > b) || (a < b));
    printf("Is NOT a greater than b? %d\n", !(a > b));

    return 0;

}