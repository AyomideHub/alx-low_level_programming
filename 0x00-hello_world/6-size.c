#include <stdio.h>

/**
	*Main - A c program that print the size of various type on the computer
	*it is compiled and run on.
	*Return 0 (success)
*/
	int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	printf("sizes of a char: $lu byte(s)\n", (unsigned long) sizeof(a));
	printf("sizes of an int: $lu byte(s)\n", (unsigned long) sizeof(b));
	printf("sizes of a long int: $lu byte(s)\n", (unsigned long) sizeof(c));
	printf("sizes of a long long int: $lu byte(s)\n", (unsigned long) sizeof(d));
	printf("sizes of a float: $lu byte(s)\n", (unsigned long) sizeof(f));
	return (0);
}
