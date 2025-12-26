#include<stdio.h>
#include<time.h>

void print_date();

int main(){

print_date();

return 0;
}

void print_date(){

time_t current_time;
time(&current_time);

char* string_date = asctime(localtime(&current_time));
printf("Current time is %s", string_date);

}
