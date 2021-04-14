#include "holberton.h"

int main(void)
{
        if(isatty(STDIN_FILENO))
        {
                no_interactive();
        }
        else
        {
                interactive();
        }
        return (0);
}