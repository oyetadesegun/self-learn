#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void){
double i;
printf("Pick a Number\n");
scanf("%lf", &i);
printf("You chose %lf as your number choice\n", i);
double A = sqrt(*i);
printf("\nThe squareroot of %lf", A);
return (0);
}