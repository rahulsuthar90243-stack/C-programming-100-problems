#include<stdio.h>
int main(){
    int first, second;
    printf("Enter first number: ");
    scanf("%d", &first);

    printf("Enter second numebr: ");
    scanf("%d", &second);

    int min = first > second ? first : second;

    for(int i = min; i >= 1; i--){
     if(first % i == 0 && second % i == 0){
        printf("The GCD of %d and %d is %d", first, second, i);
        break;
     }
    }

    return 0;
}