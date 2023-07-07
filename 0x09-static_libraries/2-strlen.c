#include "main.h"
/**
 * _strlen - Entry point
 * @s: pointer of variable
 * Return: return 0 (success)
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
	{
		counter++;
	}
	return (counter);
}
