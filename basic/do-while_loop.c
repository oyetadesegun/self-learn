#include <stdio.h>
void main()
{
    int x = 0;
    int sum = 0;
    int n = 0;
    double avg = 0;
    char list[100];
    int count = 0;
    printf("Welcome to The Average Palace\n");
    do{
        printf("Enter a number to be averaged: \n Use \"0\" to quit\n");
        scanf("%d", &x);
        if(x > 0)
        {
            list[count] = x;
            count++;
            sum += x;
            n++;
        }
    }while(x != 0);
    avg = sum / (double)n;
    printf("The list of numbers: ");
    for (int i = 0; i < count; i++) {
        printf("%d, ", list[i]);
    }
    printf("has the average of %.2lf", avg);

}
//    do {
//         printf("Enter a # above 0: ");
//         scanf("%d", &x);
//         if(x > 0)
//         {
//             sum += x;
//         }
//     }while(x > 0);
//     printf("sum: %d\n", sum);
// }