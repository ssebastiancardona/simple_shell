#ifndef SHELL
#define SHELL

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

extern char **environ;
int main(void);
void token(char *buff);
int count(char *buff);

#endif