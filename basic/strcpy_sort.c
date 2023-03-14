#include <stdio.h>
#include <string.h>
void sort(int array[], int size);
void printArray(int array[], int size);
void descend(int array[], int size);
int main()
{
    int numbers[3][3];
    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]) ;

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    numbers[2][0] = 7;
    numbers[2][1] = 8;
    numbers[2][2] = 9;
    printf("{\n");
    for(int i = 0; i < rows; i++)
    {   printf("\t{ ");
        for(int j = 0; j < columns; j++)
        {
            
            printf("%d, ", numbers[i][j]);
            
        }printf("},");
        printf("\n");
    }
    printf("\n};\n");
/*------------PRINT ARRAY------------------------*/
printf("\n");
char cars[][10] = {"Mustang", "COrvette", "camaro"};
strcpy(cars[0], "Tesla");
for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
{
    printf("%s\n", cars[i]);
}
/*--------------SWITCH CHAR------------------------*/
char x = 'X';
char y = 'Y';

char temp1;
temp1 = x;
x = y;
y = temp1;
printf("x: %c, y: %c\n",x,y);
/*---------------REPLACE ARRAY-----------------------*/
char a[15] = "water";
char b[15] = "gas";
char temp2[15];

strcpy(temp2, a);
strcpy(a, b);
strcpy(b, temp2);

printf("a=%s, b = %s \n",a,b);

/*-----------------SORT ARRAY-----------------------*/ 

int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5,0, 4, 2, -1,10};
int size = sizeof(array)/sizeof(array[0]);

sort(array, size);
printArray(array,size);
descend(array, size);
printArray(array,size);
    return 0;
}
void printArray(int array[], int size)
{   printf("{");
    for(int i = 0; i < size; i++){
        if(i == size - 1){
            printf("%d};\n", array[i]);
        }else{
            printf("%d, ", array[i]);
        }
      
    }
}
void descend(int array[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(array[j] < array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
void sort(int array[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++)
        {
            if(array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }

        }
    }
}