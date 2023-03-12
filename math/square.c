#include <stdio.h>
double square(double x);

int main()
{
    double i;

    printf("What number will you like to square:\n");
    scanf("%lf", &i);
    double x = square(i);
    printf("The square of %.1lf is %.2lf\n",i,x);

    return 0;
}
double square(double x){
    double result = x * x;
    return result;
}