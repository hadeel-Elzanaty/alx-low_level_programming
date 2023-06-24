#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int r, c;

	if (size > 0)
	{
		for (r = 1; r <= size; r++)
		{
			for (c = 1; c <= size; c++)
			{
				if ((r + c) <= size)
					_putchar(' ');
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
