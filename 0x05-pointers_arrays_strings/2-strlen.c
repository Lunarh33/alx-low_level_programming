#include "main.h"

/**
 * _strlen - funtion that return length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

while (*s != '\')
{
	len++;
	s++;
}

return(len);
}
