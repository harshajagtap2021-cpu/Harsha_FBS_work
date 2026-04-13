#include<stdio.h>

int isPalindrome(int n)
{
    int temp = n, rev = 0, rem;
    while(n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return (temp == rev);
}

void main()
{
    int num;
    printf("Enter 3 digit number: ");
    scanf("%d", &num);

    if(isPalindrome(num))
        printf("Palindrome");
    else
        printf("Not Palindrome");
}