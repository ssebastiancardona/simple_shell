#include "holberton.h"

int execute(char **token)
{
        pid_t id;

	id = fork();
	wait(NULL);
	if(id == 0)
	{
		if(execve(token[0], token, environ) == -1)
                {
			perror("Simple_Shell");
                        return (0);
                }
        }
        return (1);
}