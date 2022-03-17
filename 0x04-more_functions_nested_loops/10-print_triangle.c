#include "main.h"

/**
	* print_triangle - prints a right angled triangle of size n
	* @size: size of triangle: nxn triangle
	* Description: prints a right angled triangle of size n
	* Return: void
*/
void print_triangle(int size)
{
	int n = 1;
	int i;

	while (n <= size)
	{
		i = 0;
		while (i++ < size - n)
		{
			_putchar(' ');
		}
		i = 0;
		while (i++ < n)
		{
			_putchar('#');
		}
		_putchar('\n');
		n++;
	}

}
