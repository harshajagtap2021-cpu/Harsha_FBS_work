#include <stdio.h>

void armstrong(int n) {
    for(int i = 1; i <= n; i++) {
        int temp = i, rem, sum = 0, digits = 0;

        int t = i;
        while(t > 0) {
            digits++;
            t = t / 10;
        }

        temp = i;
        while(temp > 0) {
            rem = temp % 10;

            int power = 1;
            for(int j = 1; j <= digits; j++) {
                power = power * rem;
            }

            sum += power;
            temp = temp / 10;
        }

        if(sum == i) {
            printf("%d is Armstrong\n", i);
        }
    }
}

int main() {
    armstrong(500);
    return 0;
}