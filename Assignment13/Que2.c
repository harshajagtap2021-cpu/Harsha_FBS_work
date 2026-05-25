#include <stdio.h>

struct Employee 
{
    int id;
    char name[50];
    float salary;
};

int main() 
{
    struct Employee e;

    printf("Enter employee id: ");
    scanf("%d", &e.id);

    printf("Enter name: ");
    scanf("%s", e.name);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("\nEmployee Details:\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);

    return 0;
}