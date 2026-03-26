#include <stdio.h>

int main() {
    int n = 100000;

    for(int i = 1; i <= n; i++) {
        int temp = i, rem, sum = 0;

        while(temp > 0) {
            rem = temp % 10;

            // factorial of digit
            int fact = 1;
            for(int j = 1; j <= rem; j++) {
                fact = fact * j;
            }

            sum += fact;
            temp = temp / 10;
        }

        if(sum == i) {
            printf("%d Armstrong numbers\n ", i);
        }
    }

    return 0;
}