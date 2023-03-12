#include <stdio.h>

int main()
{
    char operator;
    double num1, num2, result;

    printf("\nEnter an operator (+ - * /): ");
    //while(getchar() != '\n')
   scanf("%c", &operator);  
    printf("Enter first Number: ");
    scanf("%lf", &num1);
    printf("Enter the second Number: ");
    scanf("%lf", &num2);
    switch(operator)
    {
        case '+':
            result = num1 + num2;
        break;
        case '-':
            result = num1 - num2;
        break;
        case '*':
            result = num1 * num2;
        break;
        case '/':
            result = num1 / num2;
        break;
        default:
            printf("%c is not a valid", operator);
            result = 0;
        break;
    }
    printf("%.2lf\n", result);
return 0;
}