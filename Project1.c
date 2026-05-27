#include <stdio.h>
#include <string.h>
#define MAX 100

struct Book 
{
    int id;
    char name[50];
    char author[50];
    char category[50];
    float price;
    float rating;
};

struct Book b[MAX];
int count = 0;

// Add Book
void addBook()
 {
    printf("Enter Book ID: ");
    scanf("%d", &b[count].id);

    printf("Enter Book Name: ");
    scanf("%s", b[count].name);

    printf("Enter Author Name: ");
    scanf("%s", b[count].author);

    printf("Enter Category: ");
    scanf("%s", b[count].category);

    printf("Enter Price: ");
    scanf("%f", &b[count].price);

    printf("Enter Rating: ");
    scanf("%f", &b[count].rating);

    count++;
    printf("Book Added Successfully!\n");
}

// Display All Books
void displayAll() {
    for(int i = 0; i < count; i++) {
        printf("\nID: %d\nName: %s\nAuthor: %s\nCategory: %s\nPrice: %.2f\nRating: %.1f\n",
        b[i].id, b[i].name, b[i].author, b[i].category, b[i].price, b[i].rating);
    }
}

// Search by ID
void searchById() {
    int id, found = 0;
    printf("Enter ID: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++) {
        if(b[i].id == id) {
            printf("Book Found: %s\n", b[i].name);
            found = 1;
        }
    }
    if(!found) printf("Book Not Found!\n");
}

// Search by Name
void searchByName() {
    char name[50];
    printf("Enter Book Name: ");
    scanf("%s", name);

    for(int i = 0; i < count; i++) {
        if(strcmp(b[i].name, name) == 0) {
            printf("Found: %s\n", b[i].name);
        }
    }
}

// Delete Book
void deleteBook() {
    int id;
    printf("Enter ID to delete: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++) {
        if(b[i].id == id) {
            for(int j = i; j < count - 1; j++) {
                b[j] = b[j + 1];
            }
            count--;
            printf("Deleted Successfully!\n");
            return;
        }
    }
    printf("Book Not Found!\n");
}

// Update Book
void updateBook() {
    int id;
    printf("Enter ID to update: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++) {
        if(b[i].id == id) {
            printf("Enter New Price: ");
            scanf("%f", &b[i].price);
            printf("Enter New Rating: ");
            scanf("%f", &b[i].rating);
            printf("Updated Successfully!\n");
            return;
        }
    }
    printf("Book Not Found!\n");
}

// Show by Author
void showByAuthor() {
    char author[50];
    printf("Enter Author Name: ");
    scanf("%s", author);

    for(int i = 0; i < count; i++) {
        if(strcmp(b[i].author, author) == 0) {
            printf("%s\n", b[i].name);
        }
    }
}

// Show by Category
void showByCategory() {
    char cat[50];
    printf("Enter Category: ");
    scanf("%s", cat);

    for(int i = 0; i < count; i++) {
        if(strcmp(b[i].category, cat) == 0) {
            printf("%s\n", b[i].name);
        }
    }
}

// Main
int main() {
    int choice;

    while(1) {
        printf("\n--- Book Management System ---\n");
        printf("1. Add Book\n2. Display All\n3. Search by ID\n4. Search by Name\n");
        printf("5. Delete Book\n6. Update Book\n7. Show by Author\n8. Show by Category\n9. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addBook(); 
			break;
			
            case 2: displayAll();
			 break;
			 
            case 3: searchById(); 
			break;
			
            case 4: searchByName();
			break;
			
            case 5: deleteBook(); 
			break;
			
            case 6: updateBook(); 
			break;
			
            case 7: showByAuthor(); 
			break;
			
            case 8: showByCategory(); 
			break;
			
            case 9: return 0;
            
            default: printf("Invalid Choice!\n");
        }
    }
}