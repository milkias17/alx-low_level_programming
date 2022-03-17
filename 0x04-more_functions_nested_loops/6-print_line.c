#include "main.h"

/**
	* print_line - draws a straight line
	* @n: length of line
	* Description: draws a straight line
	* Return: void
*/
void print_line(int n)
{
	int i = 0;

	while (i++ < n)
	{
		_putchar('_');
	}
	_putchar('\n');
}
