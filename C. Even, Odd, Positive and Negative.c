#include<stdio.h>

int main()
{
    int even = 0 , odd = 0 , positive = 0, negative = 0 ;
    int term;
    scanf("%d", &term);
    int arr[100001];

    for(int i = 0; i<term; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i]%2 == 0)
        {
            even++;
        }

        else if(arr[i]%2 != 0)
        {
            odd++;
        }

        if (arr[i]>0)
        {
            positive++;
        }

        else if(arr[i]<0)
        {
            negative++;
        }

    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d", negative);

}
