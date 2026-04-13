#include <stdio.h>

void evenOdd(int *n) 
{
    if(*n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    evenOdd(&num);
    
}