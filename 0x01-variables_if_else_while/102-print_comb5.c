#include <stdio.h>
#include <stdlib.h>
/**
 * main -possible combinations of two two-digit numbers
 *
 * Return Always 0 (success)
 */
int main(void)
{
	int c = 0;
	int f_n;
	int l_n;
	int c2 = 0;
	int f_n2;
	int l_n2;

	while (c <= 98)
	{
		f_n = (c / 10 + '0');
		l_n = (c % 10 + '0');
		c2 = 0;

		while (c2 <= 99)
		{
			f_n2 = (c / 10 + '0');
			l_n2 = (c % 10 + '0');
			if (c < c2)
			{
				putchar(f_n);
				putchar(l_n);
				putchar(' ');
				putchar(f_n2);
				putchar(l_n2);
				if (c != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c2++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}

