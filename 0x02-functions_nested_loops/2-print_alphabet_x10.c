#include "main.h"

/**
 * print_alphabet_x10 - prints letters of alphabet 10 times
 * Description - we canot use standard library
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char c;

		for (C = 'a'; c <= 'z'; c++)
		{
			_putcher(c);
		}
		_putcher('\n');
	}
}
