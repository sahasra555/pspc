#include<stdio.h>

int main()

{
    float c,f;

    printf("enter temperature value in celsius\n");
    scanf("%f",&c);

    f=(c*9.0/5.0)+32;

    printf("temperature in fahrenheit scale =%f",f);

    return 0;
}