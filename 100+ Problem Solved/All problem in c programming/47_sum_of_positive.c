#include<stdio.h>
int main(){
    int num;
    int sum = 0;
    printf("\nWelcome to Adding Positive Number");

    do{
      printf("\nPlease,enter Number: ");
      scanf("%d", &num);
      if(num < 0) continue;
      sum += num;

    } while (num != 0);
    
    printf("The Sum of all positive number: %d", sum);
    

    return 0;
}