#include<stdio.h>

void checkArmstrong(int n)
{
    int temp, rem, sum = 0;

    temp = n;

    while(n != 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }

    if(temp == sum)
        printf("Armstrong");
    else
        printf("Not Armstrong");
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    checkArmstrong(n);
    return 0;
}