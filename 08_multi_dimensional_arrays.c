// Watch the video again
#include <stdio.h>

int main(){
  int b[2][3] = {{2, 3, 6}, {4, 5, 8}}; // Watch video at 01:57:22 for visual representation of memory

  printf("%d\n", b[0][0]);

  printf("%d = %d = %d\n", b, *b, b[0]); // b[0] Gives the address of first element of b[0] array

  printf("%d = %d", b[0], &(b[0][0]));


}