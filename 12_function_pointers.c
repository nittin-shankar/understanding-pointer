/*
Pointers can also point to functions.
Watch 03:07:20 with dad
*/

#include <stdio.h>
int add(int a, int b){
  return a + b;
}

int main(){
  int c;

  // This is how we create a pointer to a function
  int (*ptr)(int, int);
  ptr = &add;

  c = ptr(2, 3); // dereferencing and executing the function
  printf("%d", c);



}