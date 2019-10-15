#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int max3(int a, int b, int c);

int main()
{
    printf("Give me three numbers: \n");
    int a = get_int();
    int b = get_int();
    int c = get_int();
    int largest = max3(a, b, c);
    printf("%d", largest);
}

int max3(int a, int b, int c)
{
    
    if (a > b && a > c)
    // if a is greater than the other variables then the largest is a
    {
        return a;
    }
    else if (b > a && b > c)
    // if b is greater than the other variables then the largest is b
    {
        return b;
    }
    else 
    // this shows that if the largest is not a or b then it is definitely c
    {
        return c;
    }
    
}