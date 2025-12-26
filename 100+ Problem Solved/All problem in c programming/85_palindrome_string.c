#include<stdio.h>
#include<string.h>

int palindrome(char str[]);

int main(){
    char name[50];
    printf("\n\nWelcome to palindrome string!");
    printf("\nPlease, enter yout string: ");
    fgets(name, sizeof(name), stdin);
    // scanf("%s", name);


    if(palindrome(name)){
        printf("\nThis string is a palindrome"); 
    }else{
        printf("\nThei string NOT a palindrome");
    }
    


    return 0;
}
int palindrome(char str[]){

    
    int n = strlen(str) - 1;
    for(int i=0; i < n / 2; i++){
        if(str[i] != str [n - 1 - i]){
         return 0;
        }
    }
    return 1;
}