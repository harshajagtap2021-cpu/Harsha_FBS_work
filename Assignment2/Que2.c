#include<stdio.h>

void main()
{
    int num=121, original, reverse = 0, digit;

    original = num;

    while(num != 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if(original == reverse)
        printf("number is Palindrome");
    else
        printf("number is Not a palindrome");
}