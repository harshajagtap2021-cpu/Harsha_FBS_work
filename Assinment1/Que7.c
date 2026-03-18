#include<stdio.h>

int main()
{
    int m=50, h, rem_min;


    h = m / 60;
    rem_min = m % 60;

    printf("Hours = %d\n", h);
    printf("Remaining Minutes = %d", rem_min);

    return 0;
}