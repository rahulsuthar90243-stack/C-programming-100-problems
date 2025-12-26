#include<stdio.h>
int main(){
    int num;
    printf("\nWelcome summing odd number");
    printf("\nPlease Enter the number: ");
    scanf("%d", &num);

    int i = 1;
    int sum = 0;
    while(i <= num){
        if(i % 2 != 0){
            sum += i;
        }
        i++;
    }


    // int sum = 0;
    // while(i <= num){
    //   sum += i;
    //    i += 2;
    // }
    printf("\nthe sum of all odd number from 1 to %d is %d", num, sum);
 
    return 0;
}