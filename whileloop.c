#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int total = 0;
     
    while( total <= 21)
    {
        int num;
        printf("Number to add to total please\n");
        num = get_int();
        total = (total + num);
        printf("The total is %d\n", total);
    }
    printf("The total has exceeded 21. The program will now terminate\n");
}