#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    
    printf("Enter a  string and I will determine if it is a palindrome\n");
    string input = get_string();
    int len = strlen(input); 
    
    
    char back[len];
    int x = 0;
    for ( int i = len - 1; i >= 0; i--)
    {
        
        back[x] = input[i];
        (x = x+1);
    }
    string og;
    og = back;
    //  printf("%s\n", og); 
    
    // for (int i = 0; i < len; i++)
    // {
    //   printf("%c", back[i]);  
    // }
    if( og == input )
    {
        printf("It's a palidrome!!\n");
    }
    else
    {
        printf("It's not a palidrome\n");
    }
    
    
    
}