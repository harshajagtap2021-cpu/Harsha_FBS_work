#include <stdio.h>

struct Date 
{
    int date;
    int month;
    int year;
};

int main()
 {
    struct Date d;

    printf("Enter date: ");
    scanf("%d", &d.date);

    printf("Enter month: ");
    scanf("%d", &d.month);

    printf("Enter year: ");
    scanf("%d", &d.year);

    printf("\nDate is: %02d/%02d/%d\n", d.date, d.month, d.year);

    return 0;
}