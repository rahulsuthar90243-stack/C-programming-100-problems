#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char text[100];
    printf("\n\nWelcome to convertng string to UPPERCASE");
    printf("\nPlease, enter text: ");

    fgets(text, sizeof(text), stdin);

    // for(int i=0; text[i] != '\0'; i++){
    for(int i=0; i < strlen(text); i++){
    text[i] = toupper (text[i]);
    }

    printf("\nYour text is: %s", text);;



    return 0;
}