#include<stdio.h>
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
   printf("after swap 1st=%d\t 2nd=%d\n",a,b);
}
int main()
{
    int x,y;
    printf("enter two elements\n");
    scanf("%d%d",&x,&y);
    printf("before swap 1st=%d \t 2nd=%d \n",x,y);
    swap(x,y);

    return 0;
}

