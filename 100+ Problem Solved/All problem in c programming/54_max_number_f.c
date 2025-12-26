#include<stdio.h>

float Max(float first, float second);

int main(){
    float first, second;
    printf("\n\nWelcome to find Larger Values");
    printf("\nPlease, enter first number: ");
    scanf("%f", &first);

    printf("Please, enter second number: ");
    scanf("%f", &second);

    float result = Max(first, second);
printf("The larger value is %.2f", result);

return 0;
}

float Max(float first, float second){

return first > second ? first : second;

// if(first > second){
//     return first;
// }else{
//     return second;
// }

}
