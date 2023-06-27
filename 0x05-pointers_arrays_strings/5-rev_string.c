#include "main.h"
/**
 * rev_string - Entry point
 * @s: pointer of string
 * Return: return 0 (success)
 */
void rev_string(char *s)
{
	int l;
	int i, tmp;

	for (l = 0; s[l] != '\0'; ++l)
		;
	for (i = 0; i < l / 2 ; i++)
	{
		tmp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = tmp;
	}
}
