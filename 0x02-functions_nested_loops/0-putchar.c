#include "main.h"
/**
 * main - Entry point
 * Description: prints '_putcher\n'
 * Return: Always 0
 */
int main(void)
{
	char str[] = "_putcher";
	int i = 0;

	while (str[i] != '\0')
	{
		char c = str[i];

		_putcher(c);
		i++;
	}
	return (0);
}
