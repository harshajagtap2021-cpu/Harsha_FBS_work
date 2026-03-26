#include <stdio.h>

int main() {
    int n = 12345;
    int first, last;

    last = n % 10;   // last digit

    // find first digit
    while(n >= 10) {
        n = n / 10;
    }
    first = n;

    printf("Sum = %d", first + last);

    return 0;
}