#include "holberton.h"
void token(char *buff)
{
        char **token = NULL;
        char *help = NULL;
        int i = 0, aux;
        pid_t id;
        token = malloc((count(buff) + 1) * sizeof(char *));
        help = strtok(buff, " ");
        while(help != NULL)
        {
                token[i] = help;
                help = strtok(NULL, " ");
                i++;
        }
        token[i] = help;
        id = fork();
        wait(NULL);
        if(id == 0)
                execve(token[0], token, environ);
        free(token);
}