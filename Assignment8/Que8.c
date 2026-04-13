#include <stdio.h>

void main()
{
   int arr[5] = {1, 2, 3, 4, 5};
    int brr[5] = {10, 20, 30, 40, 50};
    int crr[10];

   
    for(int i = 0; i < 5; i++)
    {
        crr[i] = arr[i];
    }

    
    for(int i = 0; i < 5; i++)
    {
        crr[i + 5] = brr[i];
    }

    printf("Merged array:\n");

    for(int i = 0; i < 10; i++)
    {
        printf("%d ", crr[i]);
    }
}