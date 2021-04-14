#include "holberton.h"
void interactive(void)
{
	ssize_t read = 0;
	char *buff = 0;
	size_t num = 0;

	while (read != EOF)
	{
                write(1, "$ ", 2);
		read = getline(&buff, &num, stdin);
		if(read == EOF)
                {
			free(buff);
                        exit(EXIT_SUCCESS);
                }
		buff[read - 1] = '\0';
		token(buff);
	}
	free(buff);
}
