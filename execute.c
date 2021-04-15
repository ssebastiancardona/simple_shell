#include "holberton.h"
/**
 * execute - ejecuta execve en un fork hijo
 * @token: recibe el **token
 * Return: 1
*/
int execute(char **token)
{
	pid_t id;

	id = fork();

	wait(NULL);
	if (id == 0)
	{
		if (execve(token[0], token, environ) == -1)
		{
			perror("Simple_Shell");
			exit(0);
		}
	}
	return (1);
}
