#include <stdio.h>
int main()
{
    float l,b,A,P;
    printf("Enter length and breadth values:");
    scanf("%f%f",&l,&b);
    A=l*b;
    printf("\nArea of the rectangle is %f",A);
    P=2*(l+b);
    printf("\nPerimeter of the rectangle is %f",P);
}

    