#include "main.h"
/**
 * _memcpy - Entry point
 * @dest: memory area
 * @src:second memoty area
 * @n: bytes
 * Return: 0 (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
