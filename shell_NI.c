#include "holberton.h"
/**
 * shell_no_interactive - shell modo no interactivo
 *
 * Return: canas
*/
void shell_no_interactive(void)
{
	ssize_t read = 0;
	char *buff = 0;
	size_t num = 0;

	read = getline(&buff, &num, stdin);
	buff[read - 1] = '\0';
	token(buff);
	free(buff);
}
