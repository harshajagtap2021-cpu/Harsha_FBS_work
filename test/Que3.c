#include <stdio.h>

struct Task
{
    int id;
    char task[50];
    char status[20];
};




struct Task t[100];
int count = 0;

void addTask()
{
    printf("Enter Task ID: ");
    scanf("%d", &t[count].id);

    printf("Enter Task Name: ");
    scanf("%s", t[count].task);

    printf("Enter Status: ");
    scanf("%s", t[count].status);

    count++;

    printf("Task Added Successfully\n");
}




void displayTask()
{
    printf("\nTask List:\n");

    for(int i = 0; i < count; i++)
    {
        printf("Task ID: %d\n", t[i].id);
        printf("Task Name: %s\n", t[i].task);
        printf("Status: %s\n\n", t[i].status);
    }
}




void updateTask()
{
    int id;

    printf("Enter Task ID to update: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(t[i].id == id)
        {
            printf("Enter New Task Name: ");
            scanf("%s", t[i].task);

            printf("Enter New Status: ");
            scanf("%s", t[i].status);

            printf("Task Updated Successfully\n");
            return;
        }
    }

    printf("Task Not Found\n");
}




int main()
{
    int choice;

    do
    {
        printf("\n1. Add Task");
        printf("\n2. Display Task");
        printf("\n3. Update Task");
        printf("\n4. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addTask();
                break;

            case 2:
                displayTask();
                break;

            case 3:
                updateTask();
                break;

            case 4:
                printf("Program Ended");
                break;

            default:
                printf("Invalid Choice");
        }

    } while(choice != 4);

    return 0;
}