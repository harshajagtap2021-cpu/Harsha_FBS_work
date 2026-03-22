//Accept three sides of a triangle from the user and determine whether the triangle is equilateral, isosceles, or scalene.


#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

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

    return 0;
}