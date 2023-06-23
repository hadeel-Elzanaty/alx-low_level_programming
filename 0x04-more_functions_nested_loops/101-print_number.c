#include "main.h"
/**
 * print_number - print integer number
 * @n: number input
 * Return: return 0 (success)
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + 48);
}
