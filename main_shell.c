#include "holberton.h"
/**
 * main - controla modo interactivo y no interactivo
 * Return: 0
*/
int main(void)
{
	if (!isatty(STDIN_FILENO))
	{
		shell_no_interactive();
	}
	else
	{
		shell_interactive();
	}
	return (0);
}
