#include <stdio.h>
#include <string.h>

void foo(char *arg){
  char local[256];
  strcpy(local, arg);
}

int main(int argc, char *argv[]){
  if(argc < 2) {
    return -1;
  }

  foo(argv[1]);

  return 0;
}

