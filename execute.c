#include "holberton.h"

int execute(char **token)
{
        pid_t id;

	id = fork();
	if(id == 0)
	{
		if(execve(token[0], token, environ) == -1)
                {
			perror("Simple_Shell");
                        return (0);
                }
        }
        if(id != 0)
        {
                while(wait(NULL) != -1);
        }
        return (1);
}