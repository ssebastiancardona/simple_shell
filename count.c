#include "holberton.h"

/**
 *count - counts the lenght
 *@buff: pointer to the string allocated
 *Return: int
 **/

int count(char *buff)
{
	int i;
	int count;

	for (i = 0; buff[i] != '\0'; i++)
	{
		if (buff[i] == 32 && buff[i + 1] != 32 && buff[i + 1] != '\0')
			count++;
		if (buff[0] != 32)
			count++;
	}
	return (count);
}

