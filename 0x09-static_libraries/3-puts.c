#include "main.h"
/**
 * _puts - Entry point
 * @str: pointer of string
 * Return: return 0 (success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
