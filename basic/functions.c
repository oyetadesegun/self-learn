#include <stdio.h>
#include <string.h>
char name[25];
int unsigned age;

void birthday()
{
    printf("Our Celebrant,\nWhat is your name:\n");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (j == 3)
            {
                printf("\nHappy birthday dear %s!", name);
            }
            else
            {
                printf("\nHappy birthday to you!");
            }
        }
        if(i == 3){
            printf("\n\nHow old are you now\nHow old are you now\nHow old are you now %s:\nI am ", name);
    scanf("%u", &age);
    printf("We wish you %s merry happy return,\nlong life and prosperity on your %uth birthday\nHIP HIP HIP HURRAY\n", name, age);
        }
        putchar('\n');
    }
    
}
int main()
{
    birthday();
    return 0;
}