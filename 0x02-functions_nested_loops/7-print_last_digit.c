#include "main.h"
#include <stdio.h>

/**
	* print_last_digit - return last digit of number
	* @n: number
	* Description: return last digit of number
	* Return: int
*/

int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar(-n % 10 + '0');
		return (-n % 10);
	}
	_putchar(n % 10 + '0');
	return (n % 10);
}
