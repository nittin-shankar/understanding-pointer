#include <stdio.h>
#include <stdlib.h>

  
void printHelloWorld(){
  printf("Hello world!\n");
}

int* add(int *a, int *b){
  int c = *(a) + *(b);
  return &c;
}

int main() {
  int a = 2;
  int b = 4;

  int *ptr = add(&a, &b);

  printHelloWorld();
  

  printf("Sum = %d\n", *ptr); // This won't work becuase it's on stack and as memory is automatically deallocated. Using Heap will be very useful for us.
}