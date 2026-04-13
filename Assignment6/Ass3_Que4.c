#include<stdio.h>

void checkPrime()
{
    int n, i, flag = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(n <= 1)
        printf("Not Prime");
    else if(flag == 0)
        printf("Prime");
    else
        printf("Not Prime");
}

int main()
{
    checkPrime();
    return 0;
}