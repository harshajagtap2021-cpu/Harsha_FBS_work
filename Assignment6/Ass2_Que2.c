#include<stdio.h>

void checkTriangle(int a, int b, int c)
{
    if(a == b && b == c)
    {
        printf("Triangle is Equilateral");
    }
    else if(a == b || b == c || a == c)
    {
        printf("Triangle is Isosceles");
    }
    else
    {
        printf("Triangle is Scalene");
    }
}

int main()
{
    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    checkTriangle(a, b, c);

    return 0;
}