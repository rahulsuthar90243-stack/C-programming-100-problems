#include<stdio.h>
int main(){
    int integer;
    float decimal;
    double dou;
    char character;

    printf("\nThe size of int is %d\n", sizeof(integer));
    printf("\nThe size of float is %lu\n", sizeof(decimal));
    printf("\nThe size of double is %lu\n", sizeof(dou));
    printf("\nThe size of char is %lu\n", sizeof(character));



    return 0;
}