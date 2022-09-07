#include "simpleshell.h"

/**
 * _strlen - Calculates the length of a string
 * @s: String to find the size of
 *
 * Return: The size of the string -> nbr bytes
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		++i;
	}
	return (i);
}
