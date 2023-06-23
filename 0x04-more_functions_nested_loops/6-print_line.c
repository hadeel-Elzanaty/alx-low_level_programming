#include "main.h"
/**
 * print_line - Entry point
 * @n: number of _ in line
 * Return: retun 0 Always
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = n; i > 0; i--)
			_putchar('_');
		_putchar('\n');
	}
	else if (n <= 0)
		_putchar('\n');
}
