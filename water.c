#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{
    printf("How long do you shower?\n");
    int minutes = get_int();
    
    int bottles = minutes * 12;
    
    printf("You use %i bottles\n", bottles);
}