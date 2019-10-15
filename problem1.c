#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{ 
    float a;
    float b;
    float c;
    printf("What is the length of 1 side?\n");
    a = get_float();
    printf("What is the legth of the other side?\n");
    b = get_float();
    c= sqrt((a*a)+(b*b));
    printf("The hypotnuse is %f\n", c);

}
