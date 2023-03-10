#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program
 * Return: 0
 * @argc: arguments in the command line
 * @argv: array of argc
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
