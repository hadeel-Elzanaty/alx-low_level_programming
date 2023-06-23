#include "main.h"

/**
 * print_square - Entry point
 * @size: size of the square
 *
 * Return: ALWAYS 0 (success)
*/

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
