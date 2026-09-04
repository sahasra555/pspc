#include<stdio.h>

int main()

{
    int x,y;
    printf("enter any two values");
    scanf("%d%d",&x,&y);

    printf("before swapping x=%d,y=%d\n",x,y);

    x=x+y;
    y=x-y;
    x=x-y;

    printf("after swaping x=%d,y=%d\n",x,y);

    return 0;

}