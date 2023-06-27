#include "main.h"
/**
 * puts_half - Entry point
 * @str: pointer of string
 * Return: return 0 (success)
 */
void puts_half(char *str)
{
	int i, l;

	for (l = 1; str[l] != '\0'; ++l)
		;
	for (i = l / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
