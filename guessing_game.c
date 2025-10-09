/*
NAME:JABALI KAYAGO
REG: PA106/G/28768/25
DESCRIPTION A GUESSING GAME PROGRAM THAT PROMPTS USER TO GUESS THE VALUE AND CONTINUES PROMPTING UNTIL CORRECT IS GIVEN
*/
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

int main() {
    int secret_number;
    int guess;
    int attempts = 0;
    const int MIN = 1;
    const int MAX = 20;

    
    // Use the current time to create a random ensuring a different number each time.
    srand(time(NULL)); 

    // Generate the secret number between a MIN and MAX  number
    secret_number = (rand() % (MAX - MIN + 1)) + MIN;
    
    printf("Welcome to the Number Guessing Game!\n");
    printf("I've picked a secret number between %d and %d.\n try to guess it", MIN, MAX);
    
    
    //2. Main Guessing Loop
    do {
        printf("Enter your guess: ");
        
        //the user enters Thier guess number
        if (scanf("%d", &guess) != 1) {
            printf("Invalid input.\n");
            
            
        }

        // Increase the attempt
        attempts++;

        // gives the user feedback after their input
        if (guess > secret_number) {
            printf("Too high!\n");
        } else if (guess < secret_number) {
            printf("Too low!\n");
        }
        
    } while (guess != secret_number);
     // Loop continues until the guess matches the secret number

    //gives the results
    printf("\nCongratulations!You guessed the secret number, which was %d!\n", secret_number);
    printf("It took you %d attempt(s) to guess correctly.\n", attempts);
    
    return 0;
}
