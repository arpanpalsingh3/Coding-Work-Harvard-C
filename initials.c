#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
// make program
int main(void)
{
    // get string from user (name)
    string name = get_string();
    int count = strlen(name);
    // get size of string
    printf("%c", toupper(name[0]));
    // print the first letter of the name in capital
    // use for loop, skip all letters after the firt
    for (int i =0; i < count; i++)
    {
        // when you get to a space
        if (name[i] == ' ')
        {
            // print out the first letter after the space in capital 
            printf("%c", toupper(name[i + 1]));
        }
    }
    // print new line
    printf("\n");
    
    
}
// this comment is to print out the whole name in capital 
// printf("%c", toupper(name[i]));