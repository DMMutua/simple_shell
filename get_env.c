#include "simpleshell.h"

/**
 * get_env - get the environment variables
 * @getcmd: the command in question
 * 
 * Return: the environment variable -> name = value
 */
char *get_env(char *getcmd)
{
	int i, size;

	size = _strlen(getcmd);
	for (i = 0; environ[i]; i++)
	{
		if (_strncmp(environ[i], getcmd, size) == 0)
			return (environ[i] + size + 1);
	}
	return (NULL);
}
