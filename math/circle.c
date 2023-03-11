#include <stdio.h>
#include <math.h>

int main(){

    const double PI = 3.14159;
    double radius;
    double circumference; 
    double Area;

    printf("\nEnter radius of a circle: ");
    scanf("%lf", &radius);
    circumference = 2 * PI * radius;
    Area = PI * (radius * radius);
    printf("You chose %.1lfm as the radius of your circle.\nTherefore:\nThe Circumference is:%.2lf\nThe area is:%.2lf\n",radius,circumference, Area);
    return(0);
}