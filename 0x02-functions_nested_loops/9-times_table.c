#include "main.h"

/**
	* printNumAsChar - prints an integer as a char
	* @num: number
	* Description: prints an integer as a char
	* Return: void
*/

void printNumAsChar(int num)
{
	if (num <= 9)
	{
		_putchar(' ');
		_putchar(num + '0');
	}
	else
	{
		char digit1;
		char digit2 = (num % 10) + '0';

		while (num >= 10)
		{
			num = num / 10;
		}
		digit1 = num + '0';
		_putchar(digit1);
		_putchar(digit2);
	}
}

/**
	* times_table - prints multiplication table of 9x9
	* Description: prints multiplication table of 9x9
	* Return: void
*/

void times_table(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = 0;

		while (j <= 9)
		{
			int result = i * j;

			printNumAsChar(result);
			if (j == 9 && i != 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		i++;
	}
}
