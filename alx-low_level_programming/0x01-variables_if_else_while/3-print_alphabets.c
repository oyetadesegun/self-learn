#include <stdio.h>
/**
 * main - to print both lower case and upper case
 * Return: 0 (Success)
 */
int main(void)
{
	char i;
	for ( i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for ( i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	return (0);
}
