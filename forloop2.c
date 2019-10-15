#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int c;
    int l = 0;
    int n = 6;
    for( int i = 0; i <= 5; i++)
    {
        printf("Give me 6 numbers, from which I will choose the largest from. You have %i numbers still left\n", n);
        c = get_int();
        (n--);
        if( c > l)
        {
            (l = c);
        }
        
    }
    printf("The largest number is %i.\n", l);
}