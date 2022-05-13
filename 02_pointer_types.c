#include <stdio.h>

int main(){
  int a = 1025;
  int *p;
  p = &a;
  printf("size of integer is %d bytes\n", sizeof(int));
  printf("Address = %d, value = %d\n", p, *p);
  printf("Address = %d, value = %d\n", p+1, *(p+1));

  char *p0;
  p0 = (char*)p;  // What we're doing here is type casting
  printf("size of char is %d bytes\n", sizeof(char));
  printf("Address  = %d, value = %d\n", p0, *p0);
  printf("Address  = %d, value = %d\n", p0 + 2, *(p0 + 1));

  // Typecasting the character into int
  printf("%d\n", *((int*) p0));

  int *p1;
  p1 = (int*) p0;
  printf("%d", p1 + 1);

  // Watch at 30 minutes and ask dad
}

