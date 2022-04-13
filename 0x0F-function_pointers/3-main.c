#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
	* main - prints the result of asked operation.
	* @argc: number of arguments.
	* @argv: array of arguments passed.
	* Description: prints the result of asked operation.
	* Return: int
*/

int main(int argc, char *argv[])
{
	int a;
	int b;
	char *op;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	op_func = get_op_func(op);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%i\n", (*op_func)(a, b));

	return (0);
}
