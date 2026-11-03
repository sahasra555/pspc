#include<stdio.h>
int factorial(int n);
int main()
{
    int m,result;
    printf("Enter a number: ");
    scanf("%d", &m);
    result = factorial(m);

    printf("Factorial of %d is %d", m, result);
    return 0;   
}

int factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;    

}    