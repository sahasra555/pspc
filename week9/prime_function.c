
#include <stdio.h>

int prime(int n)
{
    int i;

    if(n <= 1)
        return 0;

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(prime(n))
        printf("%d is a prime number", n);
    else
        printf("%d is not a prime number", n);

    return 0;
}

