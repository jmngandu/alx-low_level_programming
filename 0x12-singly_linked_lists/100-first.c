#include <stdio.h>

void theHare(void)__attribute__((constructor));

/**
 * theHare - prints You're beat! and yet, you must allow,\n
 * I bore my house upon my back!\n before the main function is executed.
 */
void theHare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
