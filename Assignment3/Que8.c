#include <stdio.h>

int main() {
    int n = 45, temp, rem;
    int sum = 0;

    temp = n;

    while(temp > 0) {
        rem = temp % 10;

        // factorial using for loop
        int fact = 1;
        for(int i = 1; i <= rem; i++) {
            fact = fact * i;
        }

        sum += fact;
        temp = temp / 10;
    }

    if(sum == n)
        printf("number is Armstrong");
    else
        printf("number is Not Armstrong");

    return 0;
}