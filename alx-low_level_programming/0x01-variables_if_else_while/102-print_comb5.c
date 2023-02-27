#include <stdio.h>
/**
 * main - Print the twos of numbers followed by a comma
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		for (j = 0; j <= 9; j++)
		{
			putchar(j + '0');
			putchar('\n');
			for (k = 0; k <= 9; k++)
			{
				putchar(k + '0');
				for (l = 0; l <= 9; l++)
				{
					putchar(l + '0');
					if(i + j + k + l != 35)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
