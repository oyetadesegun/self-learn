#include <stdio.h>
#include <string.h>

int main(void){
// int x = 5;
// int y = 3;
// float z = x/ (float)y;
// printf("%.2f", z);
// putchar('\0');
int age;
char name[25];

printf("What is your name?");
 //Johnscanf("%s", &name);
 fgets(name, 25, stdin);
 name[strlen(name)-1] ='\0';

printf("How old are you? ");
scanf("%d", &age);
printf("Your name is: %s and ", name);
printf("You are %d years old\n", age);
return (0);
}