#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int digits(string a);

int main()
{
    printf("Give me 3 numbers\n");
    string a = get_string();
    string b = get_string();
    string c = get_string();
    printf("The total digits in the 3 numbers is %d\n", digits(a)+digits(b)+digits(c));
    
}
int digits(string a)
{
    int la = strlen(a);
    return la;
    
}
    
