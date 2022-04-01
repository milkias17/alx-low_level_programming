#include <stdio.h>
#include <stdlib.h>

/**
	* main - multiplies two numbers
	* @argc: number of arguments
	* @argv: list of arguments passed to program
	* Description: multiplies two numbers
	* Return: int
*/
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}


	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
