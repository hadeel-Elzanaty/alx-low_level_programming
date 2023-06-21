#include "main.h"
/**
 * main - Entry point
 * Description: prints the sum of all multiplies of 3 or 5 below 1024
 * Return: Always 0(success)
*/
int main(void)
{
	int n, sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
