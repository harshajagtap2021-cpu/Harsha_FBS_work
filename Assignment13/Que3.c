#include <stdio.h>

struct Admin {
    int id;
    char name[50];
    float salary;
    float allowance;
};

int main() {
    struct Admin a;

    printf("Enter admin id: ");
    scanf("%d", &a.id);

    printf("Enter name: ");
    scanf("%s", a.name);

    printf("Enter salary: ");
    scanf("%f", &a.salary);n

    printf("Enter allowance: ");
    scanf("%f", &a.allowance);

    printf("\nAdmin Details:\n");
    printf("ID: %d\n", a.id);
    printf("Name: %s\n", a.name);
    printf("Salary: %.2f\n", a.salary);
    printf("Allowance: %.2f\n", a.allowance);

    return 0;
}