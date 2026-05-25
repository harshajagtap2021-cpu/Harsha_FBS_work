#include <stdio.h>

struct Player
 {
    char name[50];
    int matches;
    int runs;
    int wickets;
};


void accept(struct Player p[], int n)
 {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of player %d:\n", i + 1);
        scanf("%s", p[i].name);
        scanf("%d %d %d", &p[i].matches, &p[i].runs, &p[i].wickets);
    }
}

void display(struct Player p[], int n)
{
    printf("\nPlayer Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nName: %s\nMatches: %d\nRuns: %d\nWickets: %d\n",
               p[i].name, p[i].matches, p[i].runs, p[i].wickets);
    }
}

int main() 
{
    struct Player p[2];
    int n = 10;

    accept(p, n);
    display(p, n);

    int maxRuns = p[0].runs, maxWickets = p[0].wickets;
    int runIndex = 0, wicketIndex = 0;

    for (int i = 1; i < n; i++)
	 {
        if (p[i].runs > maxRuns)
		 {
            maxRuns = p[i].runs;
            runIndex = i;
        }
        if (p[i].wickets > maxWickets)
		 {
            maxWickets = p[i].wickets;
            wicketIndex = i;
        }
    }

    printf("\nPlayer with Maximum Runs:\n");
    printf("Name: %s, Runs: %d\n", p[runIndex].name, p[runIndex].runs);

    printf("\nPlayer with Maximum Wickets:\n");
    printf("Name: %s, Wickets: %d\n", p[wicketIndex].name, p[wicketIndex].wickets);

    return 0;
}