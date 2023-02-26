#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - checking last digits
 * Return: 0 (Sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int i;
	i = n % 10;
	if (n > 5)
	{	
	printf("Last digit of %d is %d and is less than 5", n, i);
	}
	else if (n == 0)
	{	
	printf("Last digit of %d is %d and is 0", n, i);
	}
	else if (n < 6 && n != 0)
	{	
	printf("Last digit of %d is %d and is less than 6 and not 0", n, i);
	}
	printf("\n");
	return (0);
}
