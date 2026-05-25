#include <stdio.h>

struct Product
 {
    int id;
    char name[50];
    int quantity;
    float price;
};


void displayValue(struct Product p) 
{
    printf("\n[Pass by Value]\n");
    printf("ID: %d\nName: %s\nQty: %d\nPrice: %.2f\n",
           p.id, p.name, p.quantity, p.price);
}


void displayAddress(struct Product *p) {
    printf("\n[Pass by Address - Single]\n");
    printf("ID: %d\nName: %s\nQty: %d\nPrice: %.2f\n",
           p->id, p->name, p->quantity, p->price);
}


void displayArray(struct Product p[], int n) {
    int i;
    printf("\n[Pass Array by Address]\n");
    for (i = 0; i < n; i++) {
        printf("\nProduct %d:\n", i + 1);
        printf("ID: %d\nName: %s\nQty: %d\nPrice: %.2f\n",
               p[i].id, p[i].name, p[i].quantity, p[i].price);
    }
}

int main() 
{
    struct Product p1, arr[2];
    int i;

    
    printf("Enter product details:\n");
    scanf("%d %s %d %f", &p1.id, p1.name, &p1.quantity, &p1.price);


    displayValue(p1);        
    displayAddress(&p1);     

    printf("\nEnter 2 products:\n");
    for (i = 0; i < 2; i++) {
        scanf("%d %s %d %f",
              &arr[i].id, arr[i].name, &arr[i].quantity, &arr[i].price);
    }

    displayArray(arr, 2);    

    return 0;
}