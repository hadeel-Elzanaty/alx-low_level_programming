#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - Entry point
 * @b: input
 * Return: pointer of array
 */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == NULL)
		exit(98);
	return (m);
}
