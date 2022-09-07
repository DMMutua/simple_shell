#include "simpleshell.h"

/**
 * main - starts the shell ->entry point
 *
 * Return: 1
 */
int main(void)
{
	int status = 1, i, j;
	char *line;
	char **args;

	signal(SIGINT, ctrl_c);
	while (status)
	{
		status = isatty(0);
		if (status == 1)
			write(1, "#cisfun$ ", 9);
		line = func_read();
		i = 0, j = 0;
		while (line[j] != '\0')
		{
			if (line[i] == ' ')
				i++;
			j++;
		}
		if (line[i] == '\0')
		{
			free(line);
			continue;
		}
		if (_strcmp(line, "env") == 0)
		{
			_printenv(), free(line);
			continue;
		}
		args = func_split(line);
		if (args == NULL)
		{
			free(line);
			continue;
		}
		if (line[0] != '\n' || line[1] != '\0')
			status = func_exec(args);
		free(args);
		free(line);
	}
	return (0);
}
