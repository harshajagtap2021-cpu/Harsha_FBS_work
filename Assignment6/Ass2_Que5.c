#include<stdio.h>

float calculateDiscount(float price, char student)
{
    float discount = 0;

    if(student == 'y')
    {
        if(price > 500)
            discount = price * 0.20;
        else
            discount = price * 0.10;
    }
    else
    {
        if(price > 600)
            discount = price * 0.15;
        else
            discount = 0;
    }

    return discount;
}

int main()
{
    float price, discount;
    char student;

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);

    discount = calculateDiscount(price, student);

    printf("Discount = %.2f\n", discount);
    printf("Final Price = %.2f", price - discount);

    return 0;
}