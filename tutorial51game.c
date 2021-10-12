#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char char1, char char2)
{
    if (char1 == char2)
    {
        return -1;
    }
    if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int temp, compscore = 0, playerscore = 0;
    char playerchar, compchar;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to the Rock, Paper, Scissors\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Player 1's turn\n");
        printf("Enter 1 for Rock. \n2 for Paper. \n3 for scissors\n");
        scanf("%d", &temp);
        getchar();
        playerchar = dict[temp - 1];
        printf("You choosed %c\n\n", playerchar);

        printf("Computer turns\n");
        temp = random(3);
        compchar = dict[temp];
        printf("Computer choosed %c\n\n", compchar);

        if (greater(compchar, playerchar) == -1)
        {
            compscore += 1;
            playerscore += 1;
            printf("It's a draw!\n");
        }
        else if (greater(compchar, playerchar) == 1)
        {
            compscore += 1;
            printf("You lose it! \nComputer got it.\n\n");
        }
        else
        {
            playerscore += 1;
            printf("You got it.\n");
        }
        printf("Your point is: %d \nComputer point is: %d\n\n", playerscore, compscore);
    }
    if (compscore > playerscore)
    {
        printf("Computer won the game...\n");
        printf("You lose the game! \nBetter luck next time...\n\n");
    }
    else if (playerscore > compscore)
    {
        printf("YaHhooo! You won the game...");
        printf("You are lucky player. Thank you so much for playing this game.\n");
    }
    else
    {
        printf("Ooo sHitt!! It's a draw...\nYou tried your best.");
    }
    

    return 0;
}