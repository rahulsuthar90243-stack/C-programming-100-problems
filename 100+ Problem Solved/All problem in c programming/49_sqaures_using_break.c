#include<stdio.h>
int main(){
    int num;
    printf("\n\nWelcome to World Squares");

    while (1){
        printf("\nPlease. enter number: ");
        scanf("%d", &num);
        if(num == -1) break;
        printf("The square of %d is %d", num, num * num);
    }

    printf("Thank You!!!");
    


    return 0;
}