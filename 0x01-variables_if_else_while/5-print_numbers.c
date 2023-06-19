#include <stdio.h>
/**
 * main-Entry point
 * Description: Print digits from 0 to 10
 * Return: 0 (Success)
*/
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%i", num);
		num++;
	}
	printf("\n");
	return (0);
}
