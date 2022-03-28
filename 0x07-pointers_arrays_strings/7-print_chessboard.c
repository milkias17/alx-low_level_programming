#include "main.h"

/**
	* print_chessboard - prints a chessboard
	* Description: prints a chessboard
	* Return: void
*/
void print_chessboard(char a[][8])
{
	int i = 0;

	while (i < 8)
	{
		int j = 0;
		
		while (j < 8)
		{
			_putchar(a[i][j++]);
		}

		_putchar('\n');
		i++;
	}
}
