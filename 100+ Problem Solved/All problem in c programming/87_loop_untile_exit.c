#include<stdio.h>
#include<string.h>

int main(){
    const char EXIT[] = "exit";
    char COMMAND[20];
    printf("\n\nWelcome to our system");
  
    while(1){
      printf("\nPlease, enter your command: ");
      fgets(COMMAND, sizeof(COMMAND), stdin);
      COMMAND[strcspn(COMMAND, "\n")] = '\0';
      if(!strcmp(EXIT, COMMAND)){
        break;
      }
    }
    
    printf("\nExited successfully!!!");

    return 0;
}