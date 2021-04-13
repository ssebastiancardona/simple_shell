#include "holberton.h"
int main(void)
{
	ssize_t read;
	char *buff = 0;
	ssize_t num;
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