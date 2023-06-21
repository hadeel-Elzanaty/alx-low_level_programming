#include "main.h"

/**
 * _abs - Entry point
 * @n:  computes the absolute value of an integer.
 * Return: Always 0(success)
*/
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
