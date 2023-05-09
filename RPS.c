#include <stdio.h>
#include <stdlib.h>

void rpsGame (int player1, int player2, int* player1_score, int* player2_score);

int main () {

    int player1, player2, i = 0;
    int player1_score = 0, player2_score = 0;
    
    printf("\nROCK PAPER SCISSORS\n");

    printf("\n-------------------\n");

    printf("\nROCK = 0, PAPER = 1, SCISSORS = 2\n");

    printf("\n-------------------\n");

    while (i < 10)
    {

        printf("\nRound %d: Fight! \n", i+1);

        printf("\nPlayer 1's Turn: ");
        scanf("%d", &player1);

        printf("\nPlayer 2's Turn: ");
        scanf("%d", &player2);
        
        rpsGame (player1, player2, &player1_score, &player2_score); 

        i++;
    }

    printf("\n\nFinal score:\nPlayer 1: %d / 10\nPlayer 2: %d / 10\n", player1_score, player2_score);

    if (player1_score > player2_score) {
        printf("\nPlayer 1 wins the match!\n-------------------\n\n");
    } else if (player2_score > player1_score) {
        printf("\nPlayer 2 wins the match!\n-------------------\n\n");
    } else {
        printf("\nThe match is a tie!\n-------------------\n\n");
    }
    
    return 0;

}

void rpsGame (int player1, int player2, int* player1_score, int* player2_score) {
    
    if (player1 == 9 || player2 == 9)
    {
        exit(1);
    }
    else if (player1 == 0 && player2 == 1)
    {
        (*player2_score)++;
        printf("\n\nPaper wraps Rock! Player 2 Wins!\n-------------------\n");
    }
    else if (player1 == 1 && player2 == 0)
    {
        (*player1_score)++;
        printf("\n\nPaper wraps Rock! Player 1 Wins!\n-------------------\n");
    }
    else if (player1 == 2 && player2 == 0)
    {
        (*player2_score)++;
        printf("\n\nRock breaks Scissors! Player 2 Wins!\n-------------------\n");
    }
    else if (player1 == 0 && player2 == 2)
    {
        (*player1_score)++;
        printf("\n\nRock breaks Scissors! Player 1 Wins!\n-------------------\n");
    }
    else if (player1 == 1 && player2 == 2)
    {
        (*player2_score)++;
        printf("\n\nScissors cuts Paper! Player 2 Wins!\n-------------------\n");
    }
    else if (player1 == 2 && player2 == 1)
    {
        (*player1_score)++;
        printf("\n\nScissors cuts Paper! Player 1 Wins!\n-------------------\n");
    }
    else if (player1 == 0 && player2 == 0)
    {
        printf("\n\nSame Rocks! Draw!\n-------------------\n");
    }
    else if (player1 == 1 && player2 == 1)
    {
        printf("\n\nSame Papers! Draw!\n-------------------\n");
    }
    else if (player1 == 2 && player2 == 2)
    {
        printf("\n\nSame Scissors! Draw!\n-------------------\n");
    }
    else
    {
        printf("\n\nInvalid\n");
    }

}