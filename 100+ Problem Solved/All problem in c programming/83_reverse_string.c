#include<stdio.h>
#include<string.h>

void reverse_string(char text[]);

int main(){
    char text[50];
    printf("\n\nWelcome to Reverse String");
    printf("\nPlease, enter your text: ");
    fgets(text, sizeof(text), stdin);

    printf("\bOriginal String is: ");
    puts(text);

    reverse_string(text);
    printf("Text after reverse is: ");
    puts(text);


    return 0;
}

void reverse_string(char text[]){

    int length = strlen(text);
    for(int i=0; i < length / 2; i++){
        char temp = text[i];
        text[i] = text[length - 1 - i];
        text[length - 1 - i] = temp;
    }

}