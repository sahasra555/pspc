
#include <stdio.h>

void fibanacii(int n);

int main()
{
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    fibanacii(n);

    return 0;
}

void fibanacii(int n)
{
    int a = 0, b = 1, sum, i;

    printf("Fibonacci series: ");

    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);

        sum = a + b;
        a = b;
        b = sum;
    }
}
