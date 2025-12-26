#include<stdio.h>
int main(){
    int first, second, temp;

    printf("\nplease Enter two number: ");
    scanf("%d %d", &first, &second);
    printf("\nnormal two number %d %d\n", first, second);

    temp = first;
    first = second;
    second = temp;

    printf("\nafter swaping two number %d %d", first, second);

    return 0;
}