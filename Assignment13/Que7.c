#include <stdio.h>

struct Time {
    int hour;
    int min;
    int sec;
};

int main() {
    struct Time t;

    printf("Enter hour: ");
    scanf("%d", &t.hour);

    printf("Enter minutes: ");
    scanf("%d", &t.min);

    printf("Enter seconds: ");
    scanf("%d", &t.sec);

    printf("\nTime is: %02d:%02d:%02d\n", t.hour, t.min, t.sec);

    return 0;
}