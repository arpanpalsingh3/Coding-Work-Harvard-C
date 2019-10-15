#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // get isbn
    printf("Please provide me with an ISBN-10 number\n");
    long long isbn = get_long_long();
    // make sure isbn is right
    while (isbn > 10000000000)
    {
        printf("That is not a 10 digit number\n");
        isbn = get_long_long();
    }
    int mod = 0;
    // make int
    int total = 0;
    // make int
    int ten = 0;
    // make int
    int nine = 0;
    // make int
    int eight=0;
    // make int
    int seven= 0;
    // make int
    int six = 0;
    // make int
    int five = 0;
    // make int
    int four = 0;
    // make int
    int three = 0;
    // make int
    int two = 0;
    // make int
    int one = 0;
    // make int
    // isolate tenth 
    (ten = ( isbn % 10 ));
    // get the other 9
    for(int i = 9; i > 0; i--)
    {
        // 9th
        if (i == 9)
        {
            ( isbn = isbn / 10 );
            ( mod = ( isbn % 10 ));
            ( nine = mod );
        }
        // 8th
        if ( i == 8 )
        {
            ( isbn = isbn / 10 );
            ( mod = ( isbn % 10 ));
            ( eight = mod );
      
        }
        // 7th
        if ( i == 7)
        {
            ( isbn = isbn / 10 );
            ( mod = ( isbn % 10 ));
            ( seven = mod );
      
        }
        // 6th
        if ( i == 6 )
        {
            ( isbn = isbn / 10 );
            ( mod = ( isbn % 10 ));
            ( six = mod );
          
        }
        // 5th
        if ( i == 5 )
        {
            ( isbn = isbn / 10 );
            ( mod = ( isbn % 10 ));
            ( five = mod );
          
        }
        // 4th
        if ( i == 4 )
        {
            ( isbn = isbn / 10 );
            ( mod = ( isbn % 10 ));
            ( four = mod );
         
        }
        // 3rd
        if ( i == 3 )
        {
            ( isbn = isbn / 10);
            ( mod = (isbn % 10));
            ( three = mod);
        
        }
        // 2nd
        if ( i == 2)
        {
            (isbn = isbn / 10);
            (mod = (isbn % 10));
            (two = mod);
           
        }
        // 1st
        if (i == 1)
        {
            (isbn = isbn / 10);
            (mod = (isbn % 10));
            (one = mod);
            
        }
       
    }
    // add them up
    (total = (( one * 1 ) + ( two * 2 ) + ( three * 3 ) + ( four * 4 )));
    (total = total + ( five * 5 ) + ( six * 6 ) + ( seven * 7 ));
    (total = total + ( eight * 8 ) + ( nine * 9 ));
    if (total % 11 == ten)
    {
        printf("YES\n"); 
        // if yes
    }else 
    {
        printf("NO\n"); 
        // if no
    }
}
