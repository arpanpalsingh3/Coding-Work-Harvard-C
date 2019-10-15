#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int num;
    int total = 0;
    do 
    
    {
        printf("Give me a number\n");
        num = get_int();
        total= total + num;
    }while (total <= 21);
}