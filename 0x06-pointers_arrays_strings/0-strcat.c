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

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (l = 0; src[l] != '\0'; l++)
		dest[i++] += src[l];
	return (dest);
}
