#include<stdio.h>

int main()

{
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        printf("%dis greater",a);
    }
    else
    {
        printf("%dis greater",b);
    }
    return 0;
}
