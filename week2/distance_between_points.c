#include<stdio.h>
#include<math.h>

int main()

{
    float x1,y1,x2,y2,a,b,d;

    printf("enter two points\n");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);

    a=pow(x1-x2,2);
    b=pow(y1-y2,2);
    d=sqrt(a+b);

    printf("the distance between two points=%f",d);
    return 0;
}