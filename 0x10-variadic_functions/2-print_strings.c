#include "variadic_functions.h"

/**
	* print_strings - prints strings followed by a new line
	* @separator: separator to print between strings
	* @n: number of strings to be passed to the function
	* Description: prints strings followed by a new line
	* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

	if (n != 0)
	{
		for (; i < n; i++)
		{
			char *s = va_arg(ap, char *);

			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
			if (separator != NULL && i != n - 1)
				printf("%s", separator);
		}

	}

	printf("\n");
	va_end(ap);
}
