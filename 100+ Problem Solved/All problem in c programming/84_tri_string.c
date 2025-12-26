#include<stdio.h>
#include<string.h>
int main(){
    char input[50];
    char trimmed[50];
    printf("\n\nWelcome to trimming of the string");
    printf("\nPlease, enter the text: ");
    fgets(input, sizeof(input), stdin);

    int start = 0;
    int end = strlen(input) - 1;

    while(input[start] == ' ') start++;
    while(input[end] == ' ' || input[end] == '\n') end--;

    int i = 0;
    while(i <= end - start){
        if(input[i + start] == ' '){
            trimmed[i] = '-';
        }else{
         trimmed[i] = input[i + start];
        }
        i++;
    }

    trimmed[i] = '\0';
    printf("Final trimmed string is %s", trimmed);

    return 0;
}