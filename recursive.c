#include<stdlib.h>
#include<stdio.h>

int recursive(int num){
  if(num <= 0){
    return num - 2;
  }
  else{
    return recursive((num - 2) + recursive(num - 1));
  }
}

int main(int argc, char **argv){
  if(argc > 2){
    printf("Too many arguments");
    exit (1);
  }
  else if(argc < 2){
    printf("At least one argument");
    exit (1);
  }
  int x = atoi(argv[1]);

  printf("f(%d) = %d", x, recursive(x));

  return 0;
}
