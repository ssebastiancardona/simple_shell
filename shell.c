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
                printf("Antes del tok %s\n", buff);
                token(buff);
                printf("Despues del tok %s\n", buff);
                sleep(2);
        }
        free(buff);
        return (0);
}