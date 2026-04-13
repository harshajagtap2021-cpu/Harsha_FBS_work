#include <stdio.h>

void main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    for(int i = 0; i < 5; i += 2)
    {
        printf("%d ", arr[i]);
    }
}