#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
  char c[100];
  printf("Please type command:");
  fgets(c,99,stdin);
  c[strlen(c)-1] = 0; //terminating null in string
  char *holder = c;
  char *command[100];
  int n = 0;
  while(holder){
    command[n] = strsep(&holder," ");
    n++;
  }
  command[n] = 0; //terminating null in array
  execvp(command[0], command);
  return 0;
}
