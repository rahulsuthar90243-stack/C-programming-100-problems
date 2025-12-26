#include<stdio.h>
int main(){
    int first, second;
    printf("\nEnter first number: ");
    scanf("%d",&first);

    printf("\nEnter second number: ");
    scanf("%d", &second);
 
    printf("Hare are the arithmatic operator\n");

    printf("%d + %d = %d\n",first, second, (first + second));
    printf("%d - %d = %d\n",first, second, (first - second));
    printf("%d * %d = %d\n",first, second, (first * second));
    printf("%d / %d = %d\n",first, second, (first / second));
    printf("%d modulo %d = %d\n",first, second, (first % second));



    return 0;
}