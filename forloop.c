#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{
    int current;
    int largest = 0;
    
    for (int i=0; i<6; i++)
    {
        printf("Give me a number\n");
        current = get_int();
        if (current > largest)
        {
            largest = current;
        }
    }printf("The largest is %d\n", largest);
}