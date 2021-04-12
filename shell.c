#include "holberton.h"
int main(void)
{
	ssize_t read;
	char *buff = 0;
	ssize_t num;
	while(read != EOF)
	{
		/**if(read == EOF)
		{
			free(buff);
			exit;
		}*/
		read = getline(&buff, &num, stdin);
		buff[read - 1] = '\0';
		token(buff);
	}
	free(buff);
	return (0);
}