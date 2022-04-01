#include <stdio.h>

/**
	* main - prints all arguments passed to program
	* @argc: number of arguments
	* @argv: list of arguments passed to program
	* Description: prints all arguments passed to program
	* Return: int
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
