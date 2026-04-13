#include <stdio.h>

void prime() {
    int n = 20;

    for(int i = 2; i <= n; i++) {
        int isPrime = 1;

        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if(isPrime == 1) {
            printf("%d is Prime\n", i);
        }
    }
}

int main() {
    prime();
    return 0;
}