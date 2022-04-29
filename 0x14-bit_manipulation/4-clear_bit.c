#include "main.h"

/**
	* _pow - returns the base raised to a certain power
	* @base: number
	* @power: power of base to be raised  to
	* Description: returns the base raised to a certain power
	* Return: int
*/
int _pow(int base, int power)
{
	if (power == 0)
		return (1);
	return (base * _pow(base, power - 1));
}

/**
	* clear_bit - sets the value of the bit at given index to 0
	* @n: number
	* @index: index to set the value of
	* Description: sets the value of the bit at given index to 0
	* Return: int
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > (sizeof(*n) * 8) - 1)
		return (-1);

	if (*n != 0)
		*n = *n - _pow(2, index);
	return (1);
}
