#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{
    printf("What is the temperature in Celsius\n");
    float celcius = get_float();
    float f = ((celcius * 9) / 5) + 32;
    
    printf("F: %.1f\n", f);
}
