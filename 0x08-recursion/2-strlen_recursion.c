#include "main.h"
/**
 * _strlen_recursion - Entry point
 * @s:input string
 * Return: 0 (success)
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s > '\0')
	{
		length += _strlen_recursion(s + 1) + 1;
	}
	return (length);
}
