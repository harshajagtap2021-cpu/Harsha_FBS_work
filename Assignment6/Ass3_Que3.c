#include<stdio.h>

void findSum()
{
    int start, end, sum = 0;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    for(int i = start; i <= end; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);
}

int main()
{
    findSum();
    return 0;
}