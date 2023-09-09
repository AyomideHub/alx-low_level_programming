#include <stdio.h>
/**
 * Main - Entry point
 * Return: always 0 success
 */

int main(void)
{
    char x = 'z';
    while (x >= 'a')
    {
        putchar(x);
        x--;
    }
    putchar('\n');
        return (0);
}
