#include<stdio.h>

int main()

{
    int x,y,temp;

    printf("\nenter x value");
    scanf("%d",&x);

    printf("\nenter y value");
    scanf("%d",&y);

    temp=x;
    x=y;
    y=temp;

    printf("x=%d,y=%d \t",x,y);

    return 0;

}

