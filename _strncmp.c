#include "simpleshell.h"

/**
 * *_strncmp - function that compare n characters of two strings
 * @s1: String 1
 * @s2: String 2
 * @n: numbers of characters
 * Return: 0 if s1 = s2, negative value if s1 < s2 and positive if s1 > s2
 */

int _strncmp(char *s1, char *s2, int n)
{
	int i;

	for (i = 0; s1[i] && s2[i] && i < n; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
