#include<stdio.h>
int main(){
    int first, second;
    printf("\nPlease enter first number: ");
    scanf("%d", &first);

    printf("Now, enter second number: ");
    scanf("%d", &second);

    int min = first < second ? first : second;
    printf("\nminimum of the tow is %d", min);

    return 0;
}