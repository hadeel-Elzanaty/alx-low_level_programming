#include <stdio.h>
/**
 * main-Entry point
 * Description: get last digit &compare with 6
 * Return: 0 (Success)
*/
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
