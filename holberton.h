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
void shell_no_interactive(void);
void shell_interactive(void);
void token(char *buff);
int count(char *buff);
int execute(char **token);

#endif /* _SHELL_HELL_ */
