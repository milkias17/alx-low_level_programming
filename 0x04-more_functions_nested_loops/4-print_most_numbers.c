#include "main.h"

/**
	* print_most_numbers - prints numbers 0 - 9 except 2 and 4
	* Description: prints numbers 0 - 9 except 2 and 4
	* Return: void
*/
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
		{
			i++;
			continue;
		}
		_putchar(i++ + '0');
	}
	_putchar('\n');
}
