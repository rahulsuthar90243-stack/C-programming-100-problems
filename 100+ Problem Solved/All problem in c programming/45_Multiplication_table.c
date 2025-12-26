#include<stdio.h>
int main(){
    int num;
    printf("\n\nWelcome to Printing Table.");
    printf("\nPlease, enter your number: ");
    scanf("%d", &num);

    for(int i = 1; i <= 10 ; i++){
        printf("%d X %d = %d\n", i, num, i * num);
    }

    return 0;
}