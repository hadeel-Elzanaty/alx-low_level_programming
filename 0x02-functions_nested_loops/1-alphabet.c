#include "main.h"

/**
 * main - Entry point
 * Description: prints the alphabet, in lowercase
 * Return: Always 0(success)
*/
void print_alphabet(void)
{
	int ch = ('a');

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
