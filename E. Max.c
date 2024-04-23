#include<stdio.h>

int main()
{
    int term;
    scanf("%d", &term);

    long long int number[term];
    int max = 0;

    for(int i = 0; i < term; i++)
    {
        scanf("%lld", &number[i]); 
        if (i == 0 || number[i] > max) 
        {
            max = number[i];
        }
    }

    printf("%d", max);

    return 0;
}
