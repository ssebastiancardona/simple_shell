#include "holberton.h"

void no_interactive(void)
{
	ssize_t read = 0;
	char *buff = 0;
	size_t num = 0;

	write(1, "$ ", 2);
	read = getline(&buff, &num, stdin);
	buff[read - 1] = '\0';
	token(buff);
	free(buff);
}