#include<stdio.h>

int fibonacci(int pos);

int main(){
    int pos;
    printf("\n\nWelcome to Fibonacci by Recursion");
    printf("\nPlease, enter no of terms: ");
    scanf("%d", &pos);

    for(int i=0; i < pos; i++){
    printf(" %d", fibonacci(i));
    }

    return 0;
}

int fibonacci(int pos){

    if(pos <= 1){
        return pos;
    }

    int result = fibonacci(pos - 1) + fibonacci(pos - 2);
    return result;

}