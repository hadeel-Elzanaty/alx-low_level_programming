#include "main.h"

/**
 * print_sign -Entry point
 * @n:  prints the sign of a number.
 * Return: return 1 if n greater than or more than zero
 * return 0 if n equal zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
