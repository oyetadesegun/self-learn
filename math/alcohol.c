#include <stdio.h>
#include <string.h>

int main()
{
    char fname[30];

    int age;
    int n;
    char grade;
    
    printf("Enter Your Full Name:\n");
    fgets(fname, 30, stdin);
    fname[strlen(fname) - 1] = '\0';
    printf("\nWelcome %s, Enter your age:", fname);
    scanf("%d", &age);
    if(age < 18)
    {
        n= 18 - age;
        printf("Sorry %s, you are just %d years old. You will need wait till %d years from now to be able to buy alcohol\n",fname,age, n);
    }
    else if (age ==18)
    {
        printf("Congratulation to the club you can now buy alcohol.\n But remember %s Drink Responsibly", fname);
    }
    else{
        printf("Welcome %s, What would you like to buy today?", fname);
    }
    printf("\nEnter a letter grade:");
    while (getchar() != '\n');
    scanf("%c", &grade);
    if(grade == 'A' || grade =='a'){
        printf("perfect!\n");
    }
    else if(grade == 'B' || grade == 'b'){
        printf("You did good\n");
    } 
    else if(grade == 'C' || grade == 'c'){
        printf("You did okay\n");
    }
    else if(grade == 'D' || grade == 'd'){
        printf("Atleast it's not an F\n");
    }
    else if(grade == 'E' || grade == 'e'){
        printf("Narrow escape\n");
    }
    else if(grade == 'F' || grade == 'f'){
        printf("You Failed\n");
    }
    else{
        printf("Not a valid grade\n");
    }
    switch (grade)
    {
    case 'A':
        printf("perfect!\n");
        break;
    case 'B':
        printf("You did good\n");
        break;
    case 'C':
        printf("You did okay\n");
        break;
    case: 'D':
        printf("Atleast it's not an F\n");
        break;
    
    default:
        printf("Your grade is not correct");
        break;
    }
    return 0;
}