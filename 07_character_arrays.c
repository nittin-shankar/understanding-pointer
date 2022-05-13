// A character should be large enough to accomodate the string
// size of character >= no of characters in string
// Strings in C is expected to be terminated by 

#include <stdio.h>
#include <string.h>

int main(){
  char c[20] = "JOHN"; // This has to happen in one line
  printf("For `c`, Size = %d\n", sizeof(c));
  printf("For `c`, Length = %d\n", strlen(c));

  char s[] = "JOHN";
  printf("\nFor `s`, Size = %d\n", sizeof(s)); // Gives us 5 including the NULL character
  printf("For `s`, Length = %d\n", strlen(s));
  /*
  // Performing the same task as above
  c[5];

  c[0] = 'J';
  c[1] = 'O';
  c[2] = 'H';
  c[3] = 'N';
  c[4] = '\0'; // Adding a null character
  */
  printf("\n%s\n", c); // This line gives us some undefined output if there's no null terminatio character

  // char x[20] = "JOHN"; // String gets stored in the stack for array
  char *x = "John"; // String gets stored as compile time constant meaning it cannot be changed again
  // x[1] = 's'; // This should give an error
  printf("constant = %s", x);
}