#include "simpleshell.h"

/**
 * *_strncmp - function that compare n characters of two strings
 * @sa: String a
 * @sb: String b
 * @n: numbers of characters
 * Return: 0 if sa = sb, negative value if sa < sb and positive if sa > sb
 */

int _strncmp(char *sa, char *sb, int n)
{
	int i;

	for (i = 0; sa[i] && sb[i] && i < n; i++)
	{
		if (sa[i] != sb[i])
			return (sa[i] - sb[i]);
	}
	return (0);
}
