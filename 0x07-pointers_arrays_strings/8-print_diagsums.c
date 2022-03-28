#include "main.h"
#include <stdio.h>

/**
	* print_diagsums - prints the sum of two diagonals of a square matrix
	* @a: square matrix array
	* @size: size of square matrix
	* Description: prints the sum of two diagonals of a square matrix
	* Return: void
*/
void print_diagsums(int *a, int size)
{
	int cur_arr = 0;
	int r_sum = 0;
	int l_sum = 0;

	while (cur_arr < size)
	{
		int l_element = a[(size * cur_arr) + cur_arr];
		int r_element = a[(size * cur_arr) + (size - 1 - cur_arr)];

		l_sum += l_element;
		r_sum += r_element;
		cur_arr++;
	}

	printf("%i, %i\n", l_sum, r_sum);
}
