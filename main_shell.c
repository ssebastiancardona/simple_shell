#include "holberton.h"
/**
 * main - enter to interactive or non-interactive mode
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
