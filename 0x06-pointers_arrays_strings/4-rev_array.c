#include "main.h"
/**
 *reverse_array - revereses an array.
 *@a: pointer to array.
 *@n: number of elements of an array.
 *
 *Return: void.
 */
void reverse_array(int *a, int n)
{
	int i, p, temp;

	for (i = 0, p = (n - 1); i < p; i++, p--)
	{
		temp = a[i];
		a[i] = a[p];
		a[p] = temp;

	}
}
