#include<stdio.h>
int main()

{
    int a,b,c;
    printf("enter three sides:");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b && b==c)
    {
        printf("the triangle is equilateral");
    }
    else if(a==b || b==c || a==c)
    {
        printf("the triangle is isosceles");
    }
    else
    {
        printf("the triangle is scalene");
    }
    return 0;
}