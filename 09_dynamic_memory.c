#include <stdio.h>

int main(){
  int a; // goes on stack

  int *p;
  p = (int*) malloc(sizeof(int)); // malloc function allocates some memory on heap. The argument of malloc function is the size
  // Now `p` stores the address of memory in heap
  *p = 10;
  free(p);


  p = (int*) malloc(sizeof(int)); // This still allocates some memory again although it's already defined. We need to explicitly free the memory. If malloc is not free to allocate new memory, then it'll return nil. Malloc actually retuns a void pointer and that's the reason we type cast

  /*
  calloc is a similar function to malloc. Let's now the see the differences between them. 
  1. It take two arguments. The first argument is the number of elements, and the second element is the size of the data type
  2. It doesn't put garbage values for the pointer. It instead allocates the value to 0.
  */
 int *x = (int*) calloc(2, sizeof(int));

/* 
What realloc basically does is it copies the allocates the already appointed pointer a different size
*/

int *b = (int*) realloc(NULL, sizeof(char)); // Equivalent to malloc
int *b = (int*) realloc(x, 2*sizeof(int)); // Increases the allocated memory by two times
int *b = (int*) realloc(x, 0); // Equivalent to free





}