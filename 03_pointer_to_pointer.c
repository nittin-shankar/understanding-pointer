#include <stdio.h>

int main(){
  int x = 5;
  int *p;
  p = &x;

  *p = 6;
  printf("%d\n", *p);

  int **q; // This line intitizalizes a pointer to a pointer. We are having two astrieks because this is only two levels deep. See min 39:34 in the video for more clear visualization
  q = &p;

  // To print the value of the pointer from the pointer that just declared. We do this like:
  printf("%d", *(*q));
}