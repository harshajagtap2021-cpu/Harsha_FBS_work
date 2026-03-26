#include <stdio.h>

int main() {
    int n = 1000;

    for(int i = 1; i <= n; i++) {
        int sum = 0;

        for(int j = 1; j < i; j++) {
            if(i % j == 0) {
                sum += j;
            }
        }

        if(sum == i) {
            printf("%d perfect numbers\n", i);
        }
    }

    return 0;
}