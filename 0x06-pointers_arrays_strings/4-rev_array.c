#include "main.h"

/**
	* swap - swaps two elements in array
	* @arr: array to perform operations on
	* @index1: first index
	* @index2: second index
	* Description: swaps two elements in array
	* Return: void
*/
void swap(int *arr, int index1, int index2)
{
	arr[index2] = arr[index2] + arr[index1];
	arr[index1] = arr[index2] - arr[index1];
	arr[index2] = arr[index2] - arr[index1];
}

/**
	* reverse_array - reverses an array of integers
	* @a: array to be reversed
	* @n: size of array
	* Description: reverses an array of integers
	* Return: void
*/
void reverse_array(int *a, int n)
{
	int leftPointer = 0;
	int rightPointer = n - 1;

	while (leftPointer < rightPointer)
	{
		swap(a, leftPointer++, rightPointer--);
	}

}
