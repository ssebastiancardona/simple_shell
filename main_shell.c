#include "holberton.h"
/**
 * main - controla modo interactivo y no interactivo
 * Return: 0
*/
int main(void)
{
if (isatty(STDIN_FILENO))
{
no_interactive();
}
else
{
interactive();
}
return (0);
}
