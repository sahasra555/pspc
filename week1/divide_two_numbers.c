#include<stdio.h>

int main()

{
    int a,b,c;

    printf("enter first value:");
    scanf("%d", &a);

    printf("enter second value:");
    scanf("%d", &b);

    c=a/b;
    printf("division of %d and %d = %d",a,b,c);

    return 0;
}