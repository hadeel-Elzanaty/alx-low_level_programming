#include "main.h"
/**
 * _strcat - check the code
 * @dest: first input
 * @src: second input
 * Return: Always 0(success)
 */
char *_strcat(char *dest, char *src)
{
	int i, l;

	i = 0;
	while (dest[i] != '\0')
		i++;
	for (l = 0; src[l] != 0; l++, i++)
		dest[i] = src[l];
	dest[i] = '\0';
	return (dest);
}
