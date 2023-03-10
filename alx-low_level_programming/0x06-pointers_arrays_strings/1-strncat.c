#include "main.h"
#include <string.h>
/**
 * _strncat - ctring concatenate
 * @dest: Destination
 * @src: source
 * @n: number of n bytes
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
    strncat(*dest, *src, n);
    return (dest);
}