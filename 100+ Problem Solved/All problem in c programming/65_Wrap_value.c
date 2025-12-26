#include<stdio.h>
#include<limits.h>
int main(){
    unsigned int positive = UINT_MAX;
    int normal = INT_MAX;

    printf("\n\nThe Max value of unsigned int is %u", positive);
    printf("\nThe Max value of normal int is %d", normal);

    positive++;
    normal++;

    printf("\n\nThe Max value of unsigned int is %u", positive);
    printf("\nThe Max value of normal int is %d", normal);

    return 0;
}