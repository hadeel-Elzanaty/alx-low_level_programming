#include "main.h"
/**
 * puts2 -Entry point
 * @str: pointer of string
 * Return: return 0 (success)
 */
void puts2(char *str)
{
	int i, l;

	for (l = 0; str[l]; l++)
		;
	for (i = 0; i < l; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
