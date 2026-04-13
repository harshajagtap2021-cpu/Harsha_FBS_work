#include<stdio.h>

void print()
{
    int no;
    printf("Enter number: ");
    scanf("%d", &no);

    for(int i = 1; i <= 10; i++)
    {
        printf("%d ", no * i);
    }
}

int main()
{
    print();
    return 0;
}