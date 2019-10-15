// includes
#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main (int argc, string argv[])
{
    if( argc != 3)
    {
        printf("Isage: ./pennies <days> <pennies1stday>\n");
        return 1;
    }
    
    int pennies = atoi(argv[2]);
    double total = 0;
    int days = atoi(argv[1]);
    
    for(int i = 1; i < days; i++)
    {
        total += pennies * pow(2,i);
    }
        
    // output the total as dollars and cents only
    printf("$%.2f\n", ((double) total) / 100);
}
