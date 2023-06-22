#include "main.h"
/**
 * _isdigit -check c is character or digit
 * @c: check digit or letter
 * Return: return 1 if digit or 0 if letter
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
