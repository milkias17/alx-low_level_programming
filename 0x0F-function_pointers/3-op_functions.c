#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
	* op_add - returns the sum of a and b
	* @a: first number to add
	* @b: number to add to a
	* Description: returns the sum of a and b
	* Return: int
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
	* op_sub - returns the difference of a and b
	* @a: first number
	* @b: number to find difference from a
	* Description: returns the difference of a and b
	* Return: int
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
	* op_mul - multiplies a and b
	* @a: first number
	* @b: second number
	* Description: multiplies a and b
	* Return: int
*/
int  op_mul(int a, int b)
{
	return (a * b);
}

/**
	* op_div - divides a by b
	* @a: first number
	* @b: second number
	* Description: divides a by b
	* Return: int
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
	* op_mod - returns the remainder of division of a / b
	* @a: first number
	* @b: second number
	* Description: returns the remainder of division of a / b
	* Return: int
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
