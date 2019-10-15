#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{
    // make days, and ask for how many are in the month
    int days=0;
    while( days < 28 || days > 31 )
    {
        printf("How many days are in your month?\n");
        days = get_int();
    }
    // get how many pennies there are on the first day
    long long pen=0;
    printf("How many pennies are you starting with on the first day?\n");
    pen = get_long_long();
    // same way
    while( pen < 1)
    {
        printf("How many pennies are you starting with on the first day?\n");
        pen = get_long_long();
    }
    
    // use formula and print it out
    double total;
    total = ( pen * ( pow (2 ,days ) - 1 ) / 100 );
    printf("$%.2f\n", total );
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}