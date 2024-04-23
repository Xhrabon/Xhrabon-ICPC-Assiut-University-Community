#include<stdio.h>

int main()
{
    int term;
    scanf("%d", &term);
    
    
    for(int j = 0; j<term; j++)
    {
        int number;
        scanf("%d", &number);
        long long int factorial = 1;
         for(int i = 1; i<=number; i++)
    {
         factorial = factorial*i;

         
    }
        printf("%lld\n", factorial);
    }
   
    
}
