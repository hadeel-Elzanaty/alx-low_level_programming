#include "main.h"
/**
 * print_numbers - Entry point
 * Description: print numbers from 0 to 9
 * Return: return 0 (success)
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
