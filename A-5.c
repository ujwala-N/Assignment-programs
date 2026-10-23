#include <stdio.h>
int main() 
{
    float A,I,C;
    printf("enter the age,income and credit values:");
    scanf("%f%f%f",&A,&I,&C);
    if (A< 21 || A> 60)
    {
        printf("Loan rejected: age not in 21 to 60");
    }    
    else if (I< 25000)
    {
        printf("Loan rejected: income below 25000");
    }    
    else if (C < 700)
    {
        printf("Loan rejected: credit score below 700");
    }    
    else
    {
        printf("Loan approved");
    }    
}