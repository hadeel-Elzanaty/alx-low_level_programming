#include "main.h"
/**
 * print_array - Entry point
 * @a: pointer of number
 * @n: input number of array elements
 * R eturn: return 0 (success)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
