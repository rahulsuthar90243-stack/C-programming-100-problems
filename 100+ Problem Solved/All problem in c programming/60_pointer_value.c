#include<stdio.h>
int main(){
    int number = 10;
    int *ptr = &number;
   
    printf("\nThe Value of number is: %d\n", number);

    *ptr = 50;
    printf("The Value of number is: %d\n", number);


    return 0;
}