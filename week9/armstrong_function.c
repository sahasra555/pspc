
#include<stdio.h>
int armstrong(int n)
{
    int rem,sum=0,temp;
    temp=n;

    while(n>0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    } 
    if(sum==temp)
    return 1;
    else 
    return 0;

}
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);

    if(armstrong(n))
    printf("armstrong number");
    else
    printf("not an armstrong number");

    return 0;
}

