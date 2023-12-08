// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main()
// {
//     srand(time(NULL));

// it us a function in stdlib header file takes input named as seeds and the 'time(NULL)' is written here written  returns time in seconds
//      //if i wirte 45 at the palace of null then it will always return a specefic value as a output.
//      //so we give it time as an input argument to the sranf function and take output based on that because time can't stop.

//     printf("The random number between 0 to 100 is %d\n",rand()%100);
// #POINT TO BE REMEMBERED AS THE NUMBER CAN BE GENERATED AS 0 ALSO.
//     //THE UPPER CODE IS USED TO GENERATE A RANDOM NUMBER USING SRAND FUNCTION IN THE STNTAX AND AT THE PALACE OF ADDRESS FOR PRINTING WE USE rand()%100 FOR GENERATING A RANDOM NUMBER OUT OF 100.

// //SO LETS MAKE A GAME NAMED AS ROCK PAPER SEASOR.
// //KEY POINTS TO REMEMBER
// //PHASE 1
// /*
//     player 1 is human
//     player 2 is computer
//     the game runs for 3 times and then declare the winner for this you have to log the scores of the human and the computer.

// */
// //PHASE 2 TAKE NAME IF THE PLAYER AS AN INPUT AND DISPLAY IT IN THE END OF THE GAME.

//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// int core()
// {

//     return 0;
// }

int main()
{
    int x = 0, y = 0; // x for human, // y for number generator.
    char name[20];
    printf("Enter the name");
    fgets(name, 20, stdin);
    printf("You entered: %s\n", name);

    for (int i = 0; i < 3; i++) // to run the code 3 times.
    {

        int b; // generation of random number.
    xavier:
    again:
        srand(time(NULL));
        b = rand() % 3;
        if (b == 0)
        {
            goto again;
        }

        int a; // taking and checking a valid input.
        printf("Enter your choice\n\nEnter 1 for rock\nEnter 2 for paper\nEnter 3 for sissors\n");
    renter:
        scanf("%d", &a);
        if (a <= 0 || a > 3)
        {
            printf("Enter a valid number\n");
            goto renter;
        }

        // defining logic
        if (a == b)
        {
            printf("DO IT AGAIN BEACUSE ITS A DRAW\n");
            goto xavier;
        }

        if (b == 2 && a == 1)
        {
            printf("better luck next time\n");
            y++;
        }
        if (a == 1 && b == 3)
        {
            printf("congratulations you won\n");
            x++;
        }
        if (a == 2 && b == 1)
        {
            printf("congratulations you won\n");
            x++;
        }
        if (a == 2 && b == 3)
        {
            printf("better luck next time\n");
            y++;
        }
        if (a == 3 && b == 1)
        {
            printf("better luck next time\n");
            y++;
        }
        if (a == 3 && b == 2)
        {
            printf("congratulations you won\n");
            x++;
        }
    }

if (x>y)
{
    printf("human wins\n");
}
else{
    printf("computer wins\n");
}

    printf("score of computer :%d\n", y);
    printf("score of human :%d\n", x);

    return 0;
}


//THE SOLUTION OF CODE WITH HARRY IS BASED ON CHARACTER INPUT AND MY IS ON NUMBER INPUT FOR THE EXECUTINON OF CODE.
