#include <stdio.h>

int isPalindrome(int *n)
{
    int temp = *n, rev = 0, rem;

    while(temp > 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    return (rev == *n);
}

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if(isPalindrome(&num))   
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}