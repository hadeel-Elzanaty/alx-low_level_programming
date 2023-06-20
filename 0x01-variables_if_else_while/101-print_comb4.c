#include <stdio.h>
/**
 * main-Entry point
 * Description: combination of numbers
 * Return: 0 (Success)
*/
int main(void)
{
	int num1 = 0;
	int num2;
	int num3;

	while (num1 <= 9)
	{
		num2 = 0;
		while (num2 <= 9)
		{
			num3 = 0;
			while (num3 <= 9)
			{
				if (num2 != num3 && num1 < num2 && num2 < num3 && num1 != num2)
				{
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(num3 + '0');
					if (num1 < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
