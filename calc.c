#include <cs50.h>
#include <math.h>
#include <stdio.h>
// make int main
int main(int argc, string argv[])
{
    // make sure the number of arguments are proper 
    if ( argc != 4)
    {
        printf("Isage: ./cal <flaot> <symbol> <float>\n");
        return 1;
        // print and return
    }
    // make a
    float num1 = atof(argv[1]);
    float num2 = atof(argv[3]);
    // make b
    float total;
    // make total
    
    // make a swtich
    switch (argv[2][0])
    {
        // incase of +
        case('+'):
            total = (num1 + num2);
            printf("%f\n",total);
            break;
        // in case of -
        case('-'):
            total = (num1 - num2);
            printf("%f\n",total);
            break;
        // in case of x
        case('x'):
            total = (num1 * num2);
            printf("%f\n",total);
            break;
        // in case /
        case('/'):
            total = (num1 / num2);
            printf("%f\n",total);
            break;
        // incase of %
        case('%'):
            total = fmod( num1, num2);
            printf("%f\n",total);
            break;
        // incase it's some other symbol 
        default:
        {
            printf("Please use a normal symbol\n");
        }
    }
}
// end of program 