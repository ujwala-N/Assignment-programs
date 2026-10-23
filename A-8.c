#include <stdio.h>
int main() 
{
    float w,h,bmi;
    printf("Enter the weight and height:");
    scanf("%f %f", &w,&h);
    if (w<= 0 || h<= 0) 
    {
        printf("Invalid input");
    }
    bmi = w/(h*h);
    printf("BMI is %f",bmi);
    if (bmi < 18.5)
    {
        printf("\nUnderweight");
    }    
    else if (bmi < 25)
    {
        printf("\nNormal");
    }    
    else if (bmi < 30)
    {
        printf("\nOverweight");
    }    
    else
    {
        printf("\nObese");
    }    
}