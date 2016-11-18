#include <string.h>
#include <stdio.h>
#include <unistd.h>

int main(){
  char *s,h;
  printf("Please type command:");
  fgets(s,100,stdin);
  char *command[20];
  int n;
  for( n = 0; s; n++){
    command[n] = strsep(&s," ");
  }
  command[n] = 0;
  execvp(command[0], command);
  return 0;
}
