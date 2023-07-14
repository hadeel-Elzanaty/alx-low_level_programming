#include "main.h"
#include <stdlib.h>
/**
 *_calloc - allocate memory with calloc
 *@nmemb:unsigned int
 *@size:unsigned int
 *Return: void *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int x;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(nmemb * size);

	if (m == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < (nmemb * size); x++)
		m[x] = 0;

	return (m);
}
