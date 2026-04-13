#include<stdio.h>

void checkDivisible(int *num)
{
    if(*num % 3 == 0 && *num % 5 == 0)
    {
        printf("Divisible by both");
    }
    else if(*num % 3 == 0 && *num % 5 != 0)
    {
        printf("Divisible by 3 but not by 5");
    }
    else if(*num % 5 == 0 && *num % 3 != 0)
    {
        printf("Divisible by 5 but not by 3");
    }
    else
    {
        printf("Divisible by None");
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    checkDivisible(&num);

    return 0;
}