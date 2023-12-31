#include "main.h"
/**
 * _strcpy - Entry point
 * @dest: first pointer
 * @src: second pointer
 * Return: return 0 (success)
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
