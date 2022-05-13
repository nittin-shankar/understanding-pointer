
// Simple examples of callback functions
#include <stdio.h>

void a(){
  printf("Hello");
}

void b(void (*ptr)()){
  ptr();
}

int main(){
  b(a);
}