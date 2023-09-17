#include <stdio.h>

int main(void)
{
	char h = '0', t = '1', u = '2';

	while ((h <= '7') || (t <= '8') || (u <= '9'))
	{
		putchar(h);
		putchar(t);
		putchar(u);
		putchar(',');
		putchar(' ');
	u != '9' ? ++u : (t != '8' ? (++t, u = t + 1) : (++h, t = h + 1, u = t + 1));
	}
	return (0);
}
