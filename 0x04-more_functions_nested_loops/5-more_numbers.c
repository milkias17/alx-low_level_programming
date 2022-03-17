#include "main.h"

/**
	* more_numbers - prints numbers 0 through 14 10 times
	* Description: prints numbers 0 through 14 10 times
	* Return: void
*/
void more_numbers(void)
{
	int i = 0;

	while (i <= 10)
	{
		int j = 0;

		while (j <= 14)
		{
			int lastDigit = j % 10;

			if (j > 9)
			{
				int firstDigit = j / 10;

				_putchar(firstDigit + '0');
			}
			_putchar(lastDigit + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}

}
