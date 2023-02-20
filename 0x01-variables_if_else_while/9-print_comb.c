#include <stdio.h>
/**
 * main - possible combinations of single-digit numbers
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int  i;

	while (i < 10)
	{
		putchar(48 + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
