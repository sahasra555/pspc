#include <stdio.h>
int main()
{
    int a[100], n, i, s;
    int l, h, mid;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in ascending order:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &s);

    l = 0;
    h = n - 1;

    while(l <= h)
    {
        mid = (l + h) / 2;

        if(s == a[mid])
        {
            printf("Element found at position %d", mid + 1);
            return 0;
        }
        else if(s < a[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    printf("Element not found");

    return 0;
}