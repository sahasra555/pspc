#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter number of values: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d values:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("Sum of array values = %d", sum);

    return 0;
}