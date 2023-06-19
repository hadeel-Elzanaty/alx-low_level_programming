#include <stdio.h>

/**
 * main-Entry point
 * Description: prints all the numbers of base 16 in lowercase
 * Return: 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
