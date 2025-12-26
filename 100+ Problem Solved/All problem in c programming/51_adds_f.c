#include<stdio.h>
int adds(int , int, int, int);
int main(){
    printf("\nWelcome to 4 adding number\n");
    printf("%d\n", adds(4,3,2,1));
    printf("%d\n", adds(6,4,6,2));
    printf("%d\n", adds(2,4,3,3));
    printf("%d\n", adds(5,7,8,1));


    return 0;
}

int adds(int a, int b, int c, int d){
    int sum = a + b + c + d;
    return sum;
}
