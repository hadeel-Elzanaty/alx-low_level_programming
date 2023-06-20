#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: prints _putchar using putchar prototype
 * Return: Always 0(success)
*/
void print_alphabet_x10(void)
{
	int ch;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for(ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
		
	}
}
