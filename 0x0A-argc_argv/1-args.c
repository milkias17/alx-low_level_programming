#include <stdio.h>

/**
	* main - print the number of arguments passes to program
	* @argc: number of arguments
	* @argv: list of arguments passed to program
	* Description: print the number of arguments passes to program
	* Return: int
*/
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%i\n", argc - 1);
	return (0);
}
