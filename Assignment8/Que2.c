#include <stdio.h>

void main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] == num)
        {
            printf("Found");
            return;
        }
    }

    printf("Not Found");
}