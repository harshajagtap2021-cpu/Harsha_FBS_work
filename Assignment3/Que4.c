#include <stdio.h>

int main() {
    int n = 7;
    int count = 0;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            count++;
        }
    }

    if(count == 2)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}