#include <stdio.h>
/**
 * main - print all the letter of the alphabet except q and e
 * Return: 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' || i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
