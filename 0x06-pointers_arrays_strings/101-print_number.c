#include "main.h"
#include <stdio.h>

/**
	* _pow - raise a base to some power
	* @base: base of number
	* @exponent: power to be raised to
	* Description: raise a base to some power
	* Return: int
*/
int _pow(int base, int exponent)
{
	int finalValue = base;

	while (exponent > 1)
	{
		finalValue *= base;
		exponent--;
	}

	return (finalValue);
}

/**
	* print_number - prints a number using _putchar
	* @n: number to be printed
	* Description: prints a number using _putchar
	* Return: void
*/
void print_number(int n)
{
	int count = 0;
	int tmp = n;
	int isNegative = 0;

	if (n < 0)
		isNegative = 1;

	while (tmp != 0)
	{
		count++;
		tmp = tmp / 10;
	}

	if (isNegative)
	{
		_putchar('-');
		n = -n;
	}
	while (count > 1)
	{
		int pow = _pow(10, count - 1);

		_putchar((n / pow) + '0');
		n = n % pow;
		count--;
	}
	_putchar(n + '0');

}
