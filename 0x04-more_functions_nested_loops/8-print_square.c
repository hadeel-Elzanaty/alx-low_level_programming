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
			for (j = 0; j < size; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
