#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{
    int side;
    
    

    do
    {
        printf("Give me a side length between 4 and 10\n");
        side = get_int();
    }while (side < 4 || side > 10);
    
    for (int i=0; i < side; i++)
    {
        if(i == 0 || i == side - 1)
        {
            for (int n =0; n < side; n++)
            {
                printf("#");
            }
        }
        else
        {
            for (int n = 0; n < side; n++)
            {
                if(n == 0 || n == side - 1)
                {
                    printf("#");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    
}

