#include "main.h"
/**
 * _strlen - Function that returns length of a string
 * @s: integerwhich is the length of the string
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
