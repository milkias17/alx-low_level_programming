#include <stdio.h>

/**
	* main - prints the name of the program
	* @argc: number of arguments
	* @argv: list of arguments passed to program
	* Description: prints the name of the program
	* Return: int
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
