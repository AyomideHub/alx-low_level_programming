#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
        int n;
        
        int y;
        
        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        
        y = n % 10;
        if (y > 5)
                printf("The last digit of %d is %d and is greater than 5\n", n, y);
        if (y == 0)
                printf("The last digit of %d is %d and is zero\n", n, y);
        if (y < 6 && y != 0)
                printf("The last digit of %d is %d and is less than 6 not 0", n, y);
                
        return (0);
}
