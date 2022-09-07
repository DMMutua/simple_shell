#include "simpleshell.h"

/**
 * func_read - Function that reads the contents of STDIN
 *
 * Return: Contents of STDIN, NULL on failure
 */
char *func_read(void)
{
	char *line = NULL;
	size_t size = 0;
	ssize_t len = 0;

	len = getline(&line, &size, stdin);
	if (len == -1 || _strcmp(line, "exit\n") == 0)
	{
		write(1, "\n", 1);
		free(line);
		exit(2);
	}
	if (line[len - 1] == '\n' && line[1] != '\0')
		line[len - 1] = '\0';

	return (line);
}
