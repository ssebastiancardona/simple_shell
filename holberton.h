#ifndef _SHELL_HELL_
#define _SHELL_HELL_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

extern char **environ;
int main(void);
void no_interactive(void);
void interactive(void);
void token(char *buff);
int count(char *buff);
int execute(char **token);

#endif /* _SHELL_HELL_ */
