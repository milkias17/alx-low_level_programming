#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
	* print_numbers - prints a number followed by a newline
	* @separator: string to be printed between numbers
	* @n: number of numbers to be printed
	* Description: prints a number followed by a newline
	* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;


	va_start(ap, n);

	if (n != 0)
	{
		for (; i < n; i++)
		{
			printf("%i", va_arg(ap, int));
			if (separator != NULL && i != n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
