#include <stdio.h>

struct HR 
{
    int id;
    char name[50];
    float salary;
    float commission;
};

int main() 
{
    struct HR h;

    printf("Enter HR id: ");
    scanf("%d", &h.id);

    printf("Enter name: ");
    scanf("%s", h.name);

    printf("Enter salary: ");
    scanf("%f", &h.salary);

    printf("Enter commission: ");
    scanf("%f", &h.commission);

    printf("\nHR Details:\n");
    printf("ID: %d\n", h.id);
    printf("Name: %s\n", h.name);
    printf("Salary: %.2f\n", h.salary);
    printf("Commission: %.2f\n", h.commission);

    return 0;
}