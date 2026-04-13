#include<stdio.h>

void findSum(int start, int end)
{
    int sum = 0;

    for(int i = start; i <= end; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);
}

int main()
{
    int start, end;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    findSum(start, end);
    return 0;
}