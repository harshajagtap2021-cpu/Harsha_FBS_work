#include <stdio.h>

int main() {
    int n = 153, temp, rem, sum = 0;

    for(temp = n; temp != 0; temp = temp / 10) {
        rem = temp % 10;
        sum += rem * rem * rem;
    }

    if(sum == n)
        printf("Number is Armstrong");
    else
        printf("Number is Not Armstrong");

    return 0;
}