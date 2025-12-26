#include<stdio.h>
int main(){
    int num;
    printf("\n\nWelcome to Prime Checker");
    printf("\nPlease enter the number: ");
    scanf("%D", &num);

    
    for(int i = 2; i < num; i++){
        if(num % 2 == 0){
            printf("%d Not is prime numebr", num);
          return 0;
        }
    }
    printf("%d is prime number", num);


    return 0;
}