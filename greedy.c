#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    float money = 0;
    // Get how much money needed
    while (money <= 0)
    {
        printf("How much money do you need, in dollars??\n");
        money = get_float();
    }
    // round the money to real number because imprecision 
    (money = money * 100);
    money = round(money);
    // make coin counter
    int counter = 0;
    // see how many quarters i need, add to counter accordingly
    while( money >= 25 )
    {
        float quarter = 0;
        ( quarter = money);
        ( quarter = quarter - 25);
        ( counter++);
        ( money = quarter);
    }
    // see how many dimes i need, add to counter accordingly
    while( money >= 10 )
    {
        float dime = 0;
        ( dime = money);
        ( dime = dime - 10);
        ( counter++);
        ( money = dime);
    }
    // see how many nickles i see, add to counter accordingly
    while( money >= 05 )
    {
        float nickle = 0;
        ( nickle = money);
        ( nickle = nickle - 5);
        ( counter++);
        ( money = nickle);
    }
    // see how many pennies i need, add to counter accordingly
    while( money >= 01)
    {
        float penny = 0;
        ( penny = money);
        ( penny = penny - 1);
        ( counter++);
        ( money = penny);
    }
    // print total ammount of coins 
    printf("%i\n", counter);
}
    
    
    
    
    
    
    
    
    
    
    

