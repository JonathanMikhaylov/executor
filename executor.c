#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
  char c[100];
  printf("Please type command:");
  fgets(c,100,stdin);
  char *holder = c;
  char *command[100];
  int n = 0;
  while(holder){
    command[n] = strsep(&holder," ");
    n++;
  }
  command[n] = 0;
  execvp(command[0], command);
  return 0;
}
