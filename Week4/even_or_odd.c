#include<stdio.h>
int main()
{
    int i;
    printf("enter a number: ");
    scanf("%d",&i);

    if(i%2==0)
    {
        printf("the number is even");
    }
    else
    {
        printf("the number is odd");
    }
    return 0;
}