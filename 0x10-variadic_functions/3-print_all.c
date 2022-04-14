#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
	* get_length - gives length of arguments from format
	* @format: format to get length of
	* Description: gives length of arguments from format
	* Return: int
*/
int get_length(const char * const format)
{
	int j = 0;
	int length = 0;

	while (format[j] != '\0')
	{
		switch (format[j])
		{
			case 'c':
				length++;
				break;
			case 'i':
				length++;
				break;
			case 'f':
				length++;
				break;
			case 's':
				length++;
				break;
			default:
				j++;
				continue;
				break;
		}
		j++;
	}
	return (length);
}

/**
	* print_all - prints any parameter given to it
	* @format: datatype of parameters passed to function
	* Description: prints any parameter given to it
	* Return: void
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ap;
	char *s;
	int length = get_length(format);
	int j = 0;

	va_start(ap, format);
	while (format[i] != '\0' && format != NULL)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				i++;
				continue;
		}
		j++;
		if (j < length)
			printf(", ");
		i++;
	}
	printf("\n");
}
