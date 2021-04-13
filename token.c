#include "holberton.h"
void token(char *buff)
{
        char **token = NULL;
        char *help = NULL;
        int i = 0;

        token = malloc((count(buff) + 1) * sizeof(char *));
        help = strtok(buff, " ");
        while(help != NULL)
        {
                token[i] = help;
                help = strtok(NULL, " ");
                i++;    
        }
        token[i] = help;
        execute(token);
        free(token);
}