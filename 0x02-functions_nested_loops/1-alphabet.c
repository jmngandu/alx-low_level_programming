#include "main.h"

/**
 * print_alphabet - prints alphabets
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putcher(C);
	}
	_putcher('\n');
}
