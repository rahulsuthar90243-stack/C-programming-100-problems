#include<stdio.h>
int main(){
    int num;
    printf("\nWelcome to printing table");
    printf("\nPlease Enter the number: ");
    scanf("%d", &num);

    int i = 1;
    while(i <= 10){
        printf("%d X %d = %d\n",i, num, i*num);
        i++;
    }

    // for(int i=1; i <= 10; i++){
    //     printf("%d ", i*num);
    // }

    return 0;
}