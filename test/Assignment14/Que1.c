#include <stdio.h>

struct Book {
    int id;
    char bname[50];
    char author[50];
    float price;
};

int main() {
    struct Book b;

    printf("Enter book id: ");
    scanf("%d", &b.id);

    printf("Enter book name: ");
    scanf("%s", b.bname);

    printf("Enter author name: ");
    scanf("%s", b.author);

    printf("Enter price: ");
    scanf("%f", &b.price);

    printf("\nBook Details:\n");
    printf("ID: %d\n", b.id);
    printf("Book Name: %s\n", b.bname);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);

    return 0;
}