#include <stdio.h>

struct Distance {
    int feet;
    int inch;
};

int main() {
    struct Distance d;

    printf("Enter feet: ");
    scanf("%d", &d.feet);

    printf("Enter inches: ");
    scanf("%d", &d.inch);

    printf("\nDistance = %d feet %d inches\n", d.feet, d.inch);

    return 0;
}