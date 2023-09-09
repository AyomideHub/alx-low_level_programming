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
        putchar('\n');
        while
                (x <= 'Z')
        {
            putchar(x);
            x++;
        }
        return (0);
}

