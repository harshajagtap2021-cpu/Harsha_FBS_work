#include <stdio.h>
#include <string.h>

#define MAX 100

// Structure for Player
struct Player
{
    int jerseyNo;
    char name[50];
    int runs;
    int wickets;
    int matches;
};

struct Player players[MAX];
int count = 0;

// Function Declarations
void addPlayer();
void displayAllPlayers();
void searchPlayer();
void updatePlayer();
void removePlayer();
void sortByRuns();
void sortByWickets();
void top3Players();

// Main Function
int main()
{
    int choice;

    while (1)
    {
        printf("\n====== PLAYER MANAGEMENT SYSTEM ======\n");
        printf("1. Add Player\n");
        printf("2. Remove Player\n");
        printf("3. Search Player\n");
        printf("4. Update Player Data\n");
        printf("5. Display All Players\n");
        printf("6. Sort Players By Runs\n");
        printf("7. Sort Players By Wickets\n");
        printf("8. Display Top 3 Players\n");
        printf("9. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addPlayer();
            break;

        case 2:
            removePlayer();
            break;

        case 3:
            searchPlayer();
            break;

        case 4:
            updatePlayer();
            break;

        case 5:
            displayAllPlayers();
            break;

        case 6:
            sortByRuns();
            break;

        case 7:
            sortByWickets();
            break;

        case 8:
            top3Players();
            break;

        case 9:
            printf("Exiting Program...\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }
}

// Add Player
void addPlayer()
{
    printf("\nEnter Jersey Number: ");
    scanf("%d", &players[count].jerseyNo);

    printf("Enter Player Name: ");
    scanf("%s", players[count].name);

    printf("Enter Runs: ");
    scanf("%d", &players[count].runs);

    printf("Enter Wickets: ");
    scanf("%d", &players[count].wickets);

    printf("Enter Matches Played: ");
    scanf("%d", &players[count].matches);

    count++;

    printf("Player Added Successfully!\n");
}

// Display All Players
void displayAllPlayers()
{
    int i;

    if (count == 0)
    {
        printf("\nNo Players Found!\n");
        return;
    }

    printf("\n====== PLAYER DETAILS ======\n");

    for (i = 0; i < count; i++)
    {
        printf("\nPlayer %d\n", i + 1);
        printf("Jersey No : %d\n", players[i].jerseyNo);
        printf("Name      : %s\n", players[i].name);
        printf("Runs      : %d\n", players[i].runs);
        printf("Wickets   : %d\n", players[i].wickets);
        printf("Matches   : %d\n", players[i].matches);
    }
}

// Search Player
void searchPlayer()
{
    int choice, jersey, i;
    char name[50];

    printf("\n1. Search By Jersey Number");
    printf("\n2. Search By Name");
    printf("\nEnter Choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter Jersey Number: ");
        scanf("%d", &jersey);

        for (i = 0; i < count; i++)
        {
            if (players[i].jerseyNo == jersey)
            {
                printf("\nPlayer Found!\n");
                printf("Name    : %s\n", players[i].name);
                printf("Runs    : %d\n", players[i].runs);
                printf("Wickets : %d\n", players[i].wickets);
                printf("Matches : %d\n", players[i].matches);
                return;
            }
        }
    }
    else if (choice == 2)
    {
        printf("Enter Player Name: ");
        scanf("%s", name);

        for (i = 0; i < count; i++)
        {
            if (strcmp(players[i].name, name) == 0)
            {
                printf("\nPlayer Found!\n");
                printf("Jersey  : %d\n", players[i].jerseyNo);
                printf("Runs    : %d\n", players[i].runs);
                printf("Wickets : %d\n", players[i].wickets);
                printf("Matches : %d\n", players[i].matches);
                return;
            }
        }
    }

    printf("Player Not Found!\n");
}

// Update Player
void updatePlayer()
{
    int jersey, i;

    printf("\nEnter Jersey Number to Update: ");
    scanf("%d", &jersey);

    for (i = 0; i < count; i++)
    {
        if (players[i].jerseyNo == jersey)
        {
            printf("Enter New Runs: ");
            scanf("%d", &players[i].runs);

            printf("Enter New Wickets: ");
            scanf("%d", &players[i].wickets);

            printf("Enter New Matches: ");
            scanf("%d", &players[i].matches);

            printf("Player Updated Successfully!\n");
            return;
        }
    }

    printf("Player Not Found!\n");
}

// Remove Player
void removePlayer()
{
    int jersey, i, j;

    printf("\nEnter Jersey Number to Remove: ");
    scanf("%d", &jersey);

    for (i = 0; i < count; i++)
    {
        if (players[i].jerseyNo == jersey)
        {
            for (j = i; j < count - 1; j++)
            {
                players[j] = players[j + 1];
            }

            count--;

            printf("Player Removed Successfully!\n");
            return;
        }
    }

    printf("Player Not Found!\n");
}

// Sort By Runs
void sortByRuns()
{
    int i, j;
    struct Player temp;

    for (i = 0; i < count - 1; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (players[i].runs < players[j].runs)
            {
                temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }

    printf("\nPlayers Sorted By Runs (Highest First)\n");
    displayAllPlayers();
}

// Sort By Wickets
void sortByWickets()
{
    int i, j;
    struct Player temp;

    for (i = 0; i < count - 1; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (players[i].wickets < players[j].wickets)
            {
                temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }

    printf("\nPlayers Sorted By Wickets (Highest First)\n");
    displayAllPlayers();
}

// Display Top 3 Players
void top3Players()
{
    int i, j;
    struct Player temp;

    // Sort By Runs
    for (i = 0; i < count - 1; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (players[i].runs < players[j].runs)
            {
                temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }

    printf("\n====== TOP 3 PLAYERS BY RUNS ======\n");

    for (i = 0; i < 3 && i < count; i++)
    {
        printf("%d. %s - %d Runs\n",
               i + 1,
               players[i].name,
               players[i].runs);
    }

    // Sort By Wickets
    for (i = 0; i < count - 1; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (players[i].wickets < players[j].wickets)
            {
                temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }

    printf("\n====== TOP 3 PLAYERS BY WICKETS ======\n");

    for (i = 0; i < 3 && i < count; i++)
    {
        printf("%d. %s - %d Wickets\n",
               i + 1,
               players[i].name,
               players[i].wickets);
    }
}