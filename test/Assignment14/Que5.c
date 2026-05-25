#include <stdio.h>
#include <string.h>

struct Movie {
    char title[50];
    char director[50];
    int year;
    char genre[30];
};

int main() {
    struct Movie m[10];
    int n = 0, choice, i;
    char search[50];

    do {
        printf("\n1. Add Movie\n2. Display Movies\n3. Search Movie\n4. Update Movie\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter movie details:\n");
                printf("Title: ");
                scanf("%s", m[n].title);
                printf("Director: ");
                scanf("%s", m[n].director);
                printf("Year: ");
                scanf("%d", &m[n].year);
                printf("Genre: ");
                scanf("%s", m[n].genre);
                n++;
                break;

            case 2:
                printf("\nMovie List:\n");
                for (i = 0; i < n; i++) {
                    printf("\nTitle: %s\nDirector: %s\nYear: %d\nGenre: %s\n",
                           m[i].title, m[i].director, m[i].year, m[i].genre);
                }
                break;

            case 3:
                printf("Enter title to search: ");
                scanf("%s", search);
                for (i = 0; i < n; i++) {
                    if (strcmp(m[i].title, search) == 0) {
                        printf("\nFound Movie:\n");
                        printf("Title: %s\nDirector: %s\nYear: %d\nGenre: %s\n",
                               m[i].title, m[i].director, m[i].year, m[i].genre);
                        break;
                    }
                }
                if (i == n) printf("Movie not found\n");
                break;

            case 4:
                printf("Enter title to update: ");
                scanf("%s", search);
                for (i = 0; i < n; i++) {
                    if (strcmp(m[i].title, search) == 0) {
                        printf("Enter new details:\n");
                        scanf("%s %s %d %s",
                              m[i].title, m[i].director, &m[i].year, m[i].genre);
                        printf("Updated successfully\n");
                        break;
                    }
                }
                if (i == n) printf("Movie not found\n");
                break;
        }

    } while (choice != 5);

    return 0;
}
