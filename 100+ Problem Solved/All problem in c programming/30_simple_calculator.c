#include<stdio.h>
int main(){
    int first, second, result ;
     char operator;
    printf("\n\nWelcome The Simple Calculator");
    printf("\nPlease Enter First number: ");
    scanf("%d", &first);

    printf("Please Enter Second number: ");
    scanf("%d", &second);
    getchar();

    printf("Finally Enter Your operation (+,-,*,/): ");
    scanf("%c", &operator);

    switch (operator){
    case '+': result = first + second ;
              printf("%d + %d = %d", first, second, result);
        break;
    case '-': result = first - second ;
              printf("%d - %d = %d",first, second, result);
        break;
    case '*': result = first * second ;
              printf("%d * %d = %d",first, second, result);
        break;
    case '/': if(second != 0){
                result = first / second;
                printf("%d / %d = %d",first, second, result);
                }else{
                    printf("Not division by 0");
                }
        break;    
  
    default:
            printf("Invalide Operator");
        break;
    }

    return 0;
}