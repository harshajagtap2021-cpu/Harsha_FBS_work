#include <stdio.h>

struct Product 
{
    char name[50];
    float price;
    int quantity;
};

int main() 
{
    struct Product cart[10];
    int n, i;
    float total = 0;

    printf("Enter number of products: ");
    scanf("%d", &n);


    for (i = 0; i < n; i++)
	 {
        printf("\nEnter product %d details:\n", i + 1);
        scanf("%s", cart[i].name);
        scanf("%f", &cart[i].price);
        scanf("%d", &cart[i].quantity);
    }

    printf("\n----- BILL -----\n");
    for (i = 0; i < n; i++) {
        float cost = cart[i].price * cart[i].quantity;
        printf("%s  x%d  = %.2f\n", cart[i].name, cart[i].quantity, cost);
        total += cost;
    }

    printf("----------------\n");
    printf("Total Amount = %.2f\n", total);

    return 0;
}