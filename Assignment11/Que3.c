#include <stdio.h>

int main() {
    char str[100];
    int n, i;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter index to remove: ");
    scanf("%d", &n);
    for (i = n; str[i] != '\0'; i++) {
        str[i] = str[i + 1];
    }

    printf("Result: %s", str);

    return 0;
}