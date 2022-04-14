#include "variadic_functions.h"
#include <stdarg.h>

/**
	* sum_them_all - returns sum of all the parameters
	* @n: number of args
	* Description: returns sum of all the parameters
	* Return: int
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int i = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	sum = 0;

	for (; i < n; i++)
		sum += va_arg(ap, int);

	return (sum);

}
