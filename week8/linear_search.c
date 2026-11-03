#include<stdio.h>
int main()
{
	int a[100], i, n, s;
	printf("enter size of array\n");
	scanf("%d", &n);

    printf("Enter elements\n");
    for(i = 0; i < n; i++)
    	scanf("%d", &a[i]);
    	for(i=0; i<n; i++)
    	{
    		if(s==a[i])
    		{
    			printf("element is found at %d position\n",i+1);
			}
		}
		if(i==n){
			printf("%d is not found\n",s);
		}
		return 0;
	}