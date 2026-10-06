#include <stdio.h>

int main()
{
    int n, i, min, max;

    printf("Enter number of values: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d values:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > max)
            max = arr[i];
    }

    printf("Minimum value = %d\n", min);
    printf("Maximum value = %d", max);

    return 0;
}