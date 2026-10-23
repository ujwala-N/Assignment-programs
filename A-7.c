#include <stdio.h>
int main() 
{
    int M;
    printf("Enter your marks:");
    scanf("%d", &M);
    if (M < 0 || M > 100)
    {
        printf("Invalid mark");
    }   
    else if (M>= 90)
    {
        printf("Grade O");
    }    
    else if (M>= 80)
    {
        printf("Grade A+");
    }    
    else if (M>= 70)
    {
        printf("Grade A");
    }    
    else if (M >= 60)
    {
        printf("Grade B");
    }    
    else if (M>= 50)
    {
        printf("Grade C");
    }    
    else
    {
        printf("Fail");
    }    
}