#include "main.h"

/**
	* print_diagonal - prints a diagnal line
	* @n: length of diagnal line
	* Description: prints a diagnal line
	* Return: void
*/
void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i < n)
	{
		j = 0;
		while (j++ < i + 1)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}

}
