/**
 * helpers.c
 *
 * CS50 AP
 * Sort Race
 * 
 * Name: ___________________________
 *
 * Helper functions for the sort race
 */

#include <cs50.h>
#include "helpers.h"
#include <stdio.h>

/**
 * Returns true if str is a valid flag (-a, -b, -r, or -s), false otherwise
 */
void print(int values[], int n)
{
    for (int i = 0; i < n ; i++)
    {
        printf("%4d ", values[i]);
    }
    printf("\n");
}




bool check_flag(char* str)
{ 
    // TODO
    return true;
}

/**
 * Sorts array of n values using bubble sort.
 */
void bubble(int values[], int n)
{
    bool sorted = false;
    do
    {
        int noswap = 0;
        for (int i = 0; i < (n-1); i++)
        {
            if (values[i] > values[i+1])
            {
                int temp = values[i];
                values[i] = values[i+1];
                values[i+1]= temp;
                
            }else
            {
                noswap++;
            }
           
        }
        
        if( noswap == n-1)
        {
            sorted=true;
        }
        
    }while (sorted == false);
    return;
}

/**
 * Sorts array of n values using selection sort.
 */
void selection(int values[], int n)
{ 
    // TODO
      // define smallest as the first in array
    
    // first for loop, places vlaues into sorted
    for ( int i = 0; i < n; i ++)
    {
        int smallest = values[i];
        int index = i;
        // finds the smallest value, replaces smallest in scratch zone
        for( int j = i; j < n; j ++)
        {
            // finding smallest
            if(values[j] < smallest)
            {
                // replacing smallest
                smallest = values[j];
                index = j;
            }
        } print(values, n);
       
        // placing smallest in the point of the array that we are at 
        values[index]= values[i];
        values[i]=smallest;
         
        
        
        
    }
    
    return;
}

/**
 * Sorts array of n values using insertion sort.
 */
void insertion(int values[], int n)
{ 
    // TODO
    
    
    return;
}

