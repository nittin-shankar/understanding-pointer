// We can say that pointers are variables that store addresses of another variable
#include <stdio.h>
#include <stdlib.h>

int main(){
  int a = 5; // This line allocates some memory for this variable
  printf("%d\n", a);

  int *p; // This creates a pointer variable and this is also allocated some memory. `int* p;` is also a valid way to create a pointer variable


  p = &a; // This line basically stores the memory adress of `a`. So, this pointer is referencing `a`
  printf("%p\n", p);

  printf("%d", *p); // This line gets the value of the memory address that `p` is pointing to. This concept is called dereferencing.
}