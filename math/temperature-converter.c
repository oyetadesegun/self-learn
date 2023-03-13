#include <stdio.h>
#include <ctype.h>

int main(){
    char unit;
    float temp;
    

    printf("\nIs the temperature in (C), (F) or (K)?:");
   // while(getchar() != '\n');
    scanf( "%c", &unit);
    unit = toupper(unit);
    switch (unit)
    {
    case 'C':
        printf("Enter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temp in Farenheit is: %.1fF\n", temp);
        break;
    case 'F':
        printf("\nEnter the temp in Farenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temp in Celsius is: %.1fF\n", temp);
        break;
    case 'K':
        printf("\nEnter the temp in Kelvin: ");
        scanf("%f", &temp);
        if(temp >= 100){
          temp -= 100;
        printf("\nThe temp in Celsius is: %.1fC\n", temp);
        break; 
        }
        else{
            printf("Kelvin can not be less than 100K");
        }
        
    default:
        printf("It can only be Celsius, Kelvin or Farenheit");
    }
    

    return 0;
}