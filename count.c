#include "holberton.h"
/**
 * count - cuenta las palabras en el string
 * @buff: buffer del getline
 * Return: un entero con la cantidad de palabras
*/
int count(char *buff)
{
int estado = 0;
int contador = 0;
while (*buff != '\0')
{
if (*buff == 32 || *buff == 10 || *buff == 9)
{
estado = 0;
}
else if (estado == 0)
{
estado = 1;
++contador;
}
++buff;
}
return (contador);
}
