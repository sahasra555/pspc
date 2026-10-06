#include <stdio.h>

int main()
{
    int n, i;
    
    printf("Enter number of values: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d values:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Values in reverse order:\n");
    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}