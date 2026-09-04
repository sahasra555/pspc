#include<stdio.h>

int main()
{
    int a,b,c;

    printf("enter first value:");
    scanf("%d", &a);

    printf("enter second value:");
    scanf("%d", &b);
    
    c=a+b;
    printf("sum of the given two numbers =%d",c);
    return 0;
}