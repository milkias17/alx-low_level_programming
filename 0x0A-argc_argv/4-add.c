#include <stdio.h>
#include <stdlib.h>

/**
	* is_num - check if given string is an int
	* @string: string to check if is a number
	* Description: check if given string is an int
	* Return: int
*/
int is_num(char *string)
{
	int i = 0;

	while (string[i] != '\0')
	{
		if (string[i] < '0' || string[i] > '9')
		{
			return (0);
		}
		i++;
	}

	return (1);
}

/**
	* main - adds positive numbers
	* @argc: number of arguments
	* @argv: list of arguments passed to program
	* Description: adds positive numbers
	* Return: int
*/
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc > 1)
	{
		int i;

		for (i = 1; i < argc; i++)
		{
			if (!is_num(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
	}

	printf("%i\n", sum);
	return (0);
}

