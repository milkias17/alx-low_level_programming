#include "main.h"

/**
	* print_square - prints a square
	* @size: size of square: nxn square
	* Description: prints a square
	* Return: void
*/
void print_square(int size)
{
	int i = 0;
	int j;

	while (i++ < size)
	{
		j = 0;

		while (j++ < size)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
