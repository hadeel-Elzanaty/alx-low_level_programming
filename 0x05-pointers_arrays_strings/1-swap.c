#include "main.h"
/**
 * swap_int - Entry point
 * @a: first pointer
 * @b: second pointer
 * Return: return 0 (success)
 */
void swap_int(int *a, int *b)
{
	int tem;

	tem = *a;
	*a =  *b;
	*b = tem;
}
