#include<stdio.h>
int main(){
    int num;
    printf("\n\nWelcome to printing fibonacci series");
    printf("\nplease enter  the number upto which series should be printed: ");;
    scanf("%d", &num);

    printf("0 ");
    if(num > 0){
        printf("1 ");
    }

    int first = 0;
    int second = 1;

    while(first + second <= num){
        int temp = first + second;
        printf("%d ", temp);
        
        first = second;
        second = temp;
    }
    
    return 0;
}