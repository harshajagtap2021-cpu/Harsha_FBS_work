#include <stdio.h>

struct Time 
{
    int hrs, min, sec;
};


int toSeconds(struct Time t) {
    return (t.hrs * 3600) + (t.min * 60) + t.sec;
}

int main() {
    struct Time t1, t2, sum;

   
    printf("Enter first time (hrs min sec): ");
    scanf("%d %d %d", &t1.hrs, &t1.min, &t1.sec);

   
    printf("Enter second time (hrs min sec): ");
    scanf("%d %d %d", &t2.hrs, &t2.min, &t2.sec);

   
    sum.sec = t1.sec + t2.sec;
    sum.min = t1.min + t2.min;
    sum.hrs = t1.hrs + t2.hrs;

  
    if (sum.sec >= 60) {
        sum.sec -= 60;
        sum.min++;
    }

    if (sum.min >= 60) {
        sum.min -= 60;
        sum.hrs++;
    }

 
    printf("\nSum of Time = %02d:%02d:%02d\n", sum.hrs, sum.min, sum.sec);

 
    printf("First time in seconds = %d\n", toSeconds(t1));
    printf("Second time in seconds = %d\n", toSeconds(t2));

    return 0;
}
