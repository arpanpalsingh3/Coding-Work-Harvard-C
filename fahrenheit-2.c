#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./fahrenheit <temp>\n");
        return 1;
    }
    
    float c = atof(argv[1]);
    
    // convert to fahrenheit; no float errors b/c celsius is a float
    float fahrenheit = (c * 9) / 5 + 32;
    printf("F: %.1f\n", fahrenheit);
}
