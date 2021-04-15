#include "holberton.h"
/**
 * interactive - shell modo interactivo
 *
 * Return: canas
*/
void shell_interactive(void)
{
	ssize_t read = 0;
	char *buff = 0;
	size_t num = 0;

	while (1)
	{
		write(STDOUT_FILENO, "$ ", 2);
		read = getline(&buff, &num, stdin);
		if (read == EOF)
		{
			free(buff);
			write(1, "\n", 1);
			exit(0);
		}
		buff[read - 1] = '\0';
		token(buff);
	}
free(buff);
}
