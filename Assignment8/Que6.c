#include <stdio.h>

void main()
{
    int arr[5], i, j, count;
    
    for(i = 0; i < 5; i++)
    {
        printf("Enter number: ");
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers are:\n");

    for(i = 0; i < 5; i++)
    {
        count = 0;

        for(j = 1; j <= arr[i]; j++)
        {
            if(arr[i] % j == 0)
                count++;
        }

        if(count == 2)
            printf("%d ", arr[i]);
    }
}