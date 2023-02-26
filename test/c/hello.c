#include <stdio.h>
/**
*main - This prints Hello Precious
* Return: This returns 0
*
*/

int main(void)
{
	char name[100];
	printf("Enter your name\n");
	scanf("%s", name);
	printf("Your name is : %s\n", name);
	printf("\n");
	char surname[100];
	printf("What of your surname\n");
	fgets(surname, 100, stdin);
	puts("Your surname is\n");
	puts(surname);
	float gpa = 3.45;
	int x;
	printf("Enter your lucky number\n");
	scanf("%d", &x);
	printf("you entered\n");
	printf("your lucky number %d\n", x);
	int y = 30;
	// char name[]="OyetadeSegun";
	char initial = 'S';
	return (0);
}
