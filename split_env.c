#include "simpleshell.h"

/**
  * split_env - tokenize the path
  * @path: path to tokenize
  * Return: array of tokens
  */

char **split_env(char *path)
{
	int size = 1024;
	int i = 0;
	char **tab_path = malloc(size * sizeof(char *));
	char *token;

	if (tab_path == NULL)
	{
		perror("Error : malloc");
		return (0);
	}

	token = strtok(path, ":");
	while (token != NULL)
	{
		tab_path[i] = token;
		i++;
		token = strtok(NULL, ":");
	}
	tab_path[i] = NULL;

	return (tab_path);
}
