#include "holberton.h"
int main(void)
{
	ssize_t read = 0;
	char *buff = 0;
	size_t num = 0;
	while(read != EOF)
	{
                write(1, "$ ", 2);
		if(read == EOF)
		{
			free(buff);
			exit(EXIT_SUCCESS);
		}
		read = getline(&buff, &num, stdin);
		buff[read - 1] = '\0';
		token(buff);
	}
	free(buff);
	return (0);
}
