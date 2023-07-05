#include "main.h"
/**
 * factorial - Entry factorial
 * @n: input int
 * Return: return int value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
