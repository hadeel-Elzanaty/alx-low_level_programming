#include "main.h"

/**
 * more_numbers - check the code
 * Description:  prints 10 times the numbers, from 0 to 14
 * Return: Always 0.
*/
void more_numbers(void)
{
	int i, j, count;

	for (i = 1; i <= 10; i++)
	{
		for (count = 0; count <= 14; count++)
		{
			j = count;

			if (j > 9)
			{
				_putchar(1 + '0');
				j = count % 10;
			}
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
