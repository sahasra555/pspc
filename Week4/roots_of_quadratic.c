#include<stdio.h>
#include<math.h>
int main()

{
    float a,b,c,discriminant,root1,root2;
    printf("enter coefficients a, b and c: ");
    scanf("%f%f%f",&a,&b,&c);
    discriminant=(b*b-4*a*c);

    if(discriminant>0)
    {
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("the roots are real and different\n");
        printf("root1=%.2f\n",root1);
        printf("root2=%.2f\n",root2);
    }
    else if(discriminant==0)
    {
        root1=root2=-b/(2*a);
        printf("the roots are real and same\n");
        printf("root1=root2=%.2f\n",root1);
    }
    else
    {
        float realPart= -b/(2*a);
        float imaginaryPart=sqrt(-discriminant)/(2*a);
        printf("the roots are complex and different\n");
        printf("root1=%.2f+%.2fi\n",realPart,imaginaryPart);
        printf("root2=%.2f-%.2fi\n",realPart,imaginaryPart);
    }

    return 0;
}