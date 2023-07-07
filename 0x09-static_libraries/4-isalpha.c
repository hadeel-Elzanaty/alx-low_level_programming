#include "main.h"

/**
 * _isalpha - Entry point
 * @c:  checks for alphabetic character.
 * Return: if letter is c or C return 1
 * otherwise return 0
*/
int _isalpha(int c)
{
	if (c >= 97 &&  c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
