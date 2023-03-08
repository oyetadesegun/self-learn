#include "main.h"
/**
 * _strlen - Function that returns length of a string
 * @s: integerwhich is the length of the string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
