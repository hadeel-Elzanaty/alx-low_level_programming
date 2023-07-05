#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - Entry point
 * @n: input
 * @first: second input
 * Return: int
 */
int check_prime(int n, int first);
int is_prime_number(int n)
{
	return (check_prime(n + 2));
}
/**
 * check_prime - Entry point
 * @n: input
 * @first: second input
 * Return: int
 */
int check_prime(int n, int first)
{
	if (first >= n && n > 1)
		return (1);
	else if (n % first == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, first + 1));
}
