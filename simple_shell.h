#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H

#include <stdio.h>

typedef struct data
{
	char **av;
	char *input;
	char **args;
	int status;
	int counter;
	char **_environ;
	char *pid;
} data_shell;


int _atoi(char *s);
int exit_shell(data_shell *datash);
int _strlen(const char *s);
int _isdigit(const char *s);

#endif
