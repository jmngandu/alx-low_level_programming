#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: format of data type to be printed
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str, *sep = "";
	va_list arguments;

	va_start(arguments, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(arguments, int));
					break;
				case 'i':
					printf("%s%i", sep, va_arg(arguments, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(arguments, double));
					break;
				case 's':
					str = va_arg(arguments, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(arguments);
}
