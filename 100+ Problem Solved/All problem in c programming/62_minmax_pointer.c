#include<stdio.h>

void min_max(int *a, int *b, int *min, int *max);

int main(){
    int first, second, max, min;
    printf("\n\nWelcome to finding Min Max");
    printf("\nPlease, enter the first number: ");
    scanf("%d", &first);

    printf("\nNow, enter the second number: ");
    scanf("%d", &second);

    min_max(&first, &second, &max, &min);

    printf("Between %d and %d, Minimum is %d and Maximum is %d", first,second,max, min);

    return 0; 
}

void min_max(int *a, int *b, int *min, int *max){

    if(*a > *b){
        *max = *a;
        *min = *b;
    }else{
        *max = *b;
        *min = *a;
    }
}
