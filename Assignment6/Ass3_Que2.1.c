#include<stdio.h>

void print(int no)
{
    for(int i = 1; i <= 10; i++)
    {
        printf("%d ", no * i);
    }
}

int main()
{
    int no;

    printf("Enter number: ");
    scanf("%d", &no);

    print(no);
    return 0;
}