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
        char i;
        char x;

        i = 'a';
        x = 'A';

        while
              (i <= 'z')
        {
            putchar(i);
            i++;
        }
        while
                (x <= 'Z')
        {
            putchar(x);
            x++;
        }
	putchar('\n');
        return (0);
}

