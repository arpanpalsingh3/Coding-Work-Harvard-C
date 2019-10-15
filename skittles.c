#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // make a random number
    srand(time(NULL));
    int skittles = rand() % 1024;
        // ask for a number from the use
    printf("Guess a number of skittles!\n");
    int guess = get_int();
    do
    {
        // if guess is too small
        if (guess < skittles)
        {
            printf("Guess again! Your number is too low.\n");
            guess = get_int();
        }
        // if guess is too big
        if (guess > skittles)
        {
            printf("Guess again! Your number is too high.\n");
            guess = get_int();
        }
        // if guess is just right
        if (guess == skittles) 
        {
            printf("WOHOOOO you got it!\n");
        }
    } while(guess != skittles);
    // keeps running until guess is right
    








}