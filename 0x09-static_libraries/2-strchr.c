#include "main.h"
/**
 * _strchr - Entry point
 * @s: string
 * @c: character search about
 * Return: 0 (success)
 */
char *_strchr(char *s, char c)
{
		if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
	       s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
