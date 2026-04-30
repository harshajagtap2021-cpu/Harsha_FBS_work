#include <stdio.h>

void checkPalindrome(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        int temp = arr[i], rev = 0, rem;

        while(temp > 0)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }

        if(rev == arr[i])
            printf("%d is Palindrome\n", arr[i]);
        else
            printf("%d is Not Palindrome\n", arr[i]);
    }
}

int main()
{
    int arr[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Enter number: ");
        scanf("%d", &arr[i]);
    }

    checkPalindrome(arr, 5);

    return 0;
}