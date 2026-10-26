#include<stdio.h>
int main()

{
    char str[100];

    int i;
    printf("Enter a string: ");
    scanf("%s",str);

    printf("the string is: %s\n",str);
    for(i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
    }

    return 0;

}

