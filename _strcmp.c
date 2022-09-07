#include "simpleshell.h"

/**
 * _strcmp - function that compares two strings
 * @s1: The first string in question
 * @s2: The second string in question
 * Return: 0 if s1 = s2, negative value if s1 < s2,
 * and positive if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] != s2[i])
			break;
	}
	return (s1[i] - s2[i]);
}
