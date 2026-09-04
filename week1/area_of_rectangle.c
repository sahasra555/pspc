#include<stdio.h>

int main()

{
    int l,b,area;

    printf("enter length of rectangle:");
    scanf("%d", &l);

    printf("enter breadth of rectangle:");
    scanf("%d", &b);

    area=l*b;
    printf("area of given rectangle is %d",area);

    return 0;
}