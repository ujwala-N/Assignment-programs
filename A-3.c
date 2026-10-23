#include <stdio.h>
int main() 
{
    int a;
    printf("Enter a value:");
    scanf("%d", &a);
    if (a>=18)
    {
        printf(" the person is eligible to vote");
    }    
    else
    {
        printf("the person is not eligible to vote");
    }    
}