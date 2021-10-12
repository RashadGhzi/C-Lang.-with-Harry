// This is snake, water and gun game. There are some rules in this game. 
    // 1.If (snake = water) or (water = snake) than snake will win. Because: snake need water.
    // 2.if (snake = gun) or (gun = snake) than gun will win. Because : gun killed snake.
    // 3.if (gun = water) or (water = gun) than water will win. Because : gun cannot use his power under water.
// This game is make by only else if statement and user define gunction.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int greater (int play, int comp)
{
    if (play == comp)
    {
        return 1; 
    }
    else if ((play == 1) && (comp == 2))
    {
        return 2;
    }
    else if ((play == 2) && (comp == 3))
    {
        return 3;
    }
    else if ((play == 3) && (comp == 1))
    {
        return 4;
    }
    else
    {
        return 0;
    }
    
    
    
    
}

int main()
{
    
    int num,player,computer,i = 1;
    int cpoint = 0;
    int ppoint = 0;

    while (i <= 3)
    {

        printf("Welcome to our snake, water and gun game.\n");
        printf("Select one of this option.\n");
        printf("1.Snake. \n2.Water. \n3.Gun. \n");
        scanf("%d", &player);

        if (player == 1)       
        {
            printf("You choossed Snake.\n");
        }
        else if (player == 2)
        {
            printf("You choossed Water.\n");
        }
        else if (player == 3)
        {
            printf("You choossed gun.\n");
        }
        
        else
        {
            printf("Enter a valid keyword.\n");
        }

        
        printf("Computer turn : \n");
        computer = random(2);
        computer += 1;
        printf("%d\n", computer);
        if (computer == 1)
        {
            printf("Computer choossed snake.\n");
        } 
        else if (computer == 2)
        {
            printf("Computer coossed water.\n");
        }
        else if (computer == 3)
        {
            printf("Computer choossed gun.\n");
        }
        else
        {
            printf("Enter a valid keyword.\n");
        }
        
        
        if (greater(player,computer) == 1)
        {
            printf("It's a draw.\n");
            ppoint += 1;
            cpoint += 1;
        }
        else if (greater(player,computer) == 2)
        {
            printf("You won.\n");
            ppoint += 1;
            cpoint += 0;
        }
        else if (greater(player,computer) == 3)
        {
            printf("You won.\n");
            ppoint += 1;
            cpoint += 0;
        }
        else if (greater(player,computer) == 4)
        {
            printf("You won.\n");
            ppoint += 1;
            cpoint += 0;
        }
        
        else
        {
            printf("Computer won.\n");
            cpoint += 1;
            ppoint += 0;
        }

        printf("Player point is %d\n", ppoint);
        printf("Computer point is %d\n", cpoint);
    
        i = i + 1;
    }

    if (ppoint == cpoint)
    {
        printf("This game is draw.\n");
    }
    else if (ppoint > cpoint)
    {
        printf("Congratulation! You won this game.\n");
    }
    else
    {
        printf("You lose this game. Better luck next time.\n");
    }
    
    
    return 0;
}
