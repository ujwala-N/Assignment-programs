#include <stdio.h>
int main() 
{
    int id,P;
    printf("Enter id and password:");
    scanf("%d %d", &id, &P);
    if (id != 101)
    {
        printf("User not found");
    }    
    else if (P== 4321)
    {
        printf("Login successful");
    }    
    else
    {
        printf("Incorrect password");
    }    
}