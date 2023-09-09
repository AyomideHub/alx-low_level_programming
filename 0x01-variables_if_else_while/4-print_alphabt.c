// Online C compiler to run C program online
#include <stdio.h>
/**
 * Main - Entry point
 * Return: always 0 success
 */

int main() {
    char x;
    x = 'a';
    
    while
    (x <= 'z')
    {
        if ((x != 'q' && x != 'e') && x <= 'z')
        putchar(x);
	x++;
    }
    putchar('\n');

    return 0;
}
