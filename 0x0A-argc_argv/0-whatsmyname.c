#include <stdio.h>
/**
 * main - is a function that prints the name of the file
 * @argc: is an argument counter for char
 * @argv: is an argument value for char
 * Return: Always 0 (Success)
 */
int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
