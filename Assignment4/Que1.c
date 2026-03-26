#include <stdio.h>
#include <math.h>

int main() {
    int n = 500;

    for(int i = 1; i <= n; i++) {
        int temp = i, rem, sum = 0, digits = 0;

        // count digits
        int t = i;
        while(t > 0) {
            digits++;
            t = t / 10;
        }

        // calculate sum of powers (nested logic)
        temp = i;
        while(temp > 0) {
            rem = temp % 10;

            int power = 1;
            for(int j = 1; j <= digits; j++) {   // nested loop
                power = power * rem;
            }

            sum += power;
            temp = temp / 10;
        }

        if(sum == i) {
            printf("%d Number is Armstrong", i);
        }
    }

    return 0;
}