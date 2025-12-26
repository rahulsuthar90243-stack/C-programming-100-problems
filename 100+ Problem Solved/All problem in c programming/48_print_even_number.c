#include<stdio.h>
int main(){
    int Max;
    printf("Welcome Peinting Number");
    printf("\nPlease, enter the max number: ");
    scanf("%d", &Max);
  
    for(int i = 1; i <= Max; i++){
        if(i % 2 == 1) continue;
        printf("%d ", i);
    }
    
    return 0;
}