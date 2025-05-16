#include <stdio.h>
#include <string.h>

int main (void){
   char* message = strcat("Hello ", "World!\n");
   printf("%s", message);
}