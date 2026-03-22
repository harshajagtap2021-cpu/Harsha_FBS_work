//Write a program to find greatest of three numbers using nested if-else.


#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b)
    {
        if(a > c)
        {
            printf("Greatest a= %d", a);
        }
        else
        {
            printf("Greatest c= %d", c);
        }
    }
    else
    {
        if(b > c)
        {
            printf("Greatest b= %d", b);
        }
        else
        {
            printf("Greatest c= %d", c);
        }
    }

    return 0;
}