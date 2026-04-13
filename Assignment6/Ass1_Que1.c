#include<stdio.h>
void evenOdd()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    if(n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}

int main()
{
    evenOdd();
}