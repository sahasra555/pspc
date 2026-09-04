#include<stdio.h>

int main()

{
    float pie,r,area;

    printf("enter radius value :");
    scanf("%f", &r);

    pie=3.14;
    area=pie*r*r;

    printf("area of given circle =%f",area);

    return 0;

}