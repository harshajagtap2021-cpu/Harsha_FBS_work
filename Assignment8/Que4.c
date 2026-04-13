#include <stdio.h>

void main()
{
    int arr[5] = {10, 15, 20, 25, 30};

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0)
            printf("%d is Even\n", arr[i]);
        else
            printf("%d is Odd\n", arr[i]);
    }
}