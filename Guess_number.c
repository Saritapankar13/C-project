#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
     srand(time(0));
    int random_number = (rand() % 100) + 1; // Generate a random number between 1 and 100
    int number_of_guesses = 0;                 // Initialize the number of guesses to 0
    int guessed_number;
    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed_number);

        if (guessed_number > random_number)
        {
            printf("Lower Number please\n");
        }
        else if (guessed_number < random_number)
        {
            printf("Higher Number please\n");
        }
        else
        {
            printf("Congrats! You guessed it right.\n");
        }
        nfg++; // Increment the guess count
    } while (guessed_number != random_number);

    printf("You guessed the number in %d guesses.\n", number_of_guesses);

    return 0;
}

    