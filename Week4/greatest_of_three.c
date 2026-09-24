#include<stdio.h>
int main()

{
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("%dis greatest",a);
    }
    else if(b>a && b>c)
    {
        printf("%dis greatest",b);
    }
    else
    {
        printf("%dis greatest",c);
    }
    return 0;
}