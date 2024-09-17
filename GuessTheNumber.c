#include <stdio.h>    // Standard input/output functions like printf and scanf
#include <stdlib.h>   // For random number functions like rand, srand
#include <time.h>     // For seeding random numbers based on current time

int main() {
    int randomNumber, guess, attempts = 0; 
    int lower = 1, upper = 100;             // Setting the range for the random number

    // Seed the random number generator so we get different numbers each time
    srand(time(0));

    // Generate a random number between lower and upper (inclusive)
    randomNumber = (rand() % (upper - lower + 1)) + lower;

    printf("\nWelcome to the Awesome Number Guessing Game!\n\n");
    printf("I've picked a magical number between %d and %d. Can you figure it out?\n\n", lower, upper);

    do {
        printf("Go ahead, take a wild guess: ");       
        scanf("%d", &guess);                 
        attempts++;                   // Count this as an attempt

        // Check if the guess is too high, too low, or correct
        if (guess > randomNumber) {
            printf("Oops, a bit too high! Try lowering your aim! \n\n");
        } else if (guess < randomNumber) {
            printf("Uh-oh, too low! Maybe aim a little higher! \n\n"); 
        } else {
            printf("Woohoo! You nailed it in %d attempts! You're a genius! \n\n", attempts);
        }
    } while (guess != randomNumber); // Continue looping until the guess is correct

    printf("Thanks for playing! You're awesome!\n");
    return 0;
}