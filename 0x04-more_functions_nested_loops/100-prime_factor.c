#include "main.h"
/**
 * _sqrt - calculate the square root of number
 * @num1: input number
 * Return: return sqrt if number
 */
double _sqrt(double num1)
{
	int sqrt, tmp;

	tmp = 0;
	sqrt = num1 / 2;
	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (num1 / tmp + tmp) / 2;
	}
	return (sqrt);
}
/**
 * largest_prime_factor- finds and prints the largest
 *
 * @num: input number
 */
void largest_prime_factor(long int num)
{
	int j, largest;

	while (num % 2 == 0)
		num = num / 2;
	for (j = 3; j <= _sqrt(num); j += 2)
	{
		while (num % j == 0)
		{
			num = num / j;
			largest = j;
		}
	}
	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - Entry point
 * Return: return Always 0 (success)
 */
int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}
