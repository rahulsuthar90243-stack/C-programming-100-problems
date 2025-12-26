#include<stdio.h>
int main(){
    int num;
    printf("\n\nWelcome the sum of digtis integer");
    printf("\nPlease Enter the number: ");
    scanf("%d", &num);

    int sum = 0;
    int copy =num;
    while(num > 0){
        sum += num % 10;
        num /= 10;

    }
   
    printf("\nThe sum of digit %d is %d", copy, sum);
    return 0;
}