#ifndef __SIMPLE_SHELL__
#define __SIMPLE_SHELL__

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <signal.h>

extern char **environ;

char *func_read(void);
char **func_split(char *line);
int func_exec(char **args);
void ctrl_c(int sig);
void _printenv(void);
char *get_path(char *getcom);
char *_strcat(char *dest, char *src);
char *get_env(char *name);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
int _strncmp(char *s1, char *s2, int n);
char **split_env(char *path);

#endif/*_SIMPLE_SHELL_*/
