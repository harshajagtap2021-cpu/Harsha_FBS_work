#include <stdio.h>

int main() {
    int n, choice;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nMenu:\n");
    printf("1. Even or Odd\n");
    printf("2. Prime or Not\n");
    printf("3. Palindrome or Not\n");
    printf("4. Positive, Negative or Zero\n");
    printf("5. Reverse a Number\n");
    printf("6. Sum of Digits\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            if(n % 2 == 0)
                printf("Even");
            else
                printf("Odd");
            break;

        case 2: {
            int isPrime = 1;

            if(n <= 1)
                isPrime = 0;

            // ? Proper nested loop
            for(int i = 2; i <= n; i++) {
                for(int j = 2; j <= i/2; j++) {
                    if(i == n && n % j == 0) {
                        isPrime = 0;
                        break;
                    }
                }
            }

            if(isPrime)
                printf("Prime");
            else
                printf("Not Prime");
            break;
        }

        case 3: {
            int temp = n, rem, rev = 0;

            while(temp > 0) {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp = temp / 10;
            }

            if(rev == n)
                printf("Palindrome");
            else
                printf("Not Palindrome");
            break;
        }

        case 4:
            if(n > 0)
                printf("Positive");
            else if(n < 0)
                printf("Negative");
            else
                printf("Zero");
            break;

        case 5: {
            int temp = n, rem, rev = 0;

            while(temp > 0) {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp = temp / 10;
            }

            printf("Reverse = %d", rev);
            break;
        }

        case 6: {
            int temp = n, rem, sum = 0;

            while(temp > 0) {
                rem = temp % 10;
                sum += rem;
                temp = temp / 10;
            }

            printf("Sum of digits = %d", sum);
            break;
        }

        default:
            printf("Invalid choice");
    }

    return 0;
}