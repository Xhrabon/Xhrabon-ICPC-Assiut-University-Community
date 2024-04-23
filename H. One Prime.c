#include<stdio.h>

int main()
{
    int number;
    scanf("%d", &number);

    int count = 0;

    for(int i = 1; i<=number; i++)
    {
        if(number%i==0)
        {
            count++;
        }
    }
    if(count ==2)
    {
        printf("YES");
    }

    else
    {
        printf("NO");
    }

    
}
