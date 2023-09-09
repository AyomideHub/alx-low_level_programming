#include <stdio.h>
/**
 * Main - Entry point
 * Return: always 0 success
 */

int main(void)
{
    int i = 0;
    char x = 'a';
    while (i < 10)
    {
        putchar(i + '0');
        i++;
    }
    while (x <= 'f')
    {
        putchar(x);
        x++;
    }
    putchar('\n');
        return (0);
}
