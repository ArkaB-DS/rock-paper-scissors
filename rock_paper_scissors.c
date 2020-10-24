/* AUTHOR: AJ
   DATE: 24-10-20
   PROGRAM: ROCK-PAPER-SCISSORS
*/

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

main(void)
{
    srand(time(NULL));
    printf("\n\nHi there!! I'm AJ!\nWould you like to play Rock, Paper, Scissors? (y\\n)\t");
    char c,turn;
    scanf("%c",&c);
    if (c=='n') exit(0);
    else
    {
        k:
        // player's turn
        printf("\nEnter 'r' for rock, 'p' for paper or 's' for scissors!\nDon't worry!! I'm a computer program and will not cheat!!\nEnter here:\t");
        fflush(stdin);
        scanf("%c",&turn);
        printf("\nYour turn:\t");
        turn=='r'?printf("rock\n"):turn=='p'?printf("paper\n"):turn=='s'?printf("scissors\n"):1;
        int opponent_turn= (turn=='r') ? 1: (turn=='p') ? 2 : 3;

        // randomly generating my turn
        int my_turn=rand()%3+1;
        printf("My turn:\t");
        my_turn==1?printf("rock\n"):my_turn==2?printf("paper\n"):printf("scissors\n");
        // checking winning condition
        if (opponent_turn==my_turn) printf("It's a draw!\n");
        else
        {
               if (opponent_turn==1 && my_turn==2) printf("Paper covers rock!! You lost!\n");
               else if (opponent_turn==1 && my_turn==3) printf("Rock breaks scissors!! You won!\n");
               else if (opponent_turn==2 && my_turn==1) printf("Paper covers rock!! You won!\n");
               else if (opponent_turn==2 && my_turn==3) printf("Scissors cut paper!! You lost!\n");
               else if (opponent_turn==3 && my_turn==1) printf("Rock breaks scissors!! You lost!\n");
               else if (opponent_turn==3 && my_turn==2) printf("Scissors cut paper!! You won!\n");

        }

        // continue game?
        printf("\nDo you want to play again? (y\\n)\t");
        fflush(stdin);
        scanf("%c",&c);
        if(c=='y') goto k;
        else exit(0);


    }

}
