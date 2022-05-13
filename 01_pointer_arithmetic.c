#include <stdio.h>

int main(){
  int a = 10;
  int *p;
  p = &a;

  // Pointer arithmetic
  printf("Address of p is %d\n", p);
  printf("size of integer is %d bytes\n", sizeof(int));
  printf("Address of p+1 is %d\n", p+1); // It is dangerous to modify values using pointer arithmetic 
  // Clarify with dad regarding this
}

