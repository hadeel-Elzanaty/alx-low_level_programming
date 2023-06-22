#include "main.h"
/**
 * _isupper - check if c is upper
 * @c: input for alphabet
 * Description: check c uppercase or lowercase
 * Return: if uppercase return 1
 * if lowercase return 0
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
