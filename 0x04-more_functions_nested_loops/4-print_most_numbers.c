#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * Description: print digits except 2 & 4
 * Return: Always 0.
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
