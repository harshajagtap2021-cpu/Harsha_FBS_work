#include <stdio.h>

int main() {
    int n = 121, temp, rem, rev = 0;

    temp = n;

    while(temp > 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if(rev == n)
        printf("number is Palindrome");
    else
        printf(" number is Not Palindrome");

    return 0;
}