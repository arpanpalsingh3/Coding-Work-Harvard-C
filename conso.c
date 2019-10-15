#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void)
{
    printf("Write something please\n");
    string s = get_string();
    int length = strlen(s);
    
    for (int i = 0; i < length; i++)
    {
        if( (s[i] != 'a') && (s[i] != 'e')  && (s[i] != 'i')  
        && (s[i] != 'o')  && (s[i] != 'u'))
        
        {
            printf("%c", s[i]);
        }
        
        
    }
}