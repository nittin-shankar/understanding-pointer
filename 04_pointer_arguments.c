/*
Exploring how to pass pointers as function arguments. Before doing that, we should understand that memory of application is divided into 4 parts:
1. Heap - This is a free pool of memory that we can use.
2. Stack - This section is used for the execution of function calls and this is also where all the local variables go. The size is determined by the OS and the system architecture
3. Static/Global - Stores all the global variables
4. Code(Text) - Stores the instructions of the program

How memory is allocated within the program is beautifully explained from 51:00
*/


#include <stdio.h>
/*
// Below won't work because it's taking in an actual integer and also becuase of the scope
void increment(int a){
  a = a + 1;
  printf("Address of variable `a` in increment = %d\n", &a);
}
*/

void increment(int *a){
  *a = (*a) + 1;
}
int main(){
  int a;
  a = 10;
  printf("Address of varialbe in main = %d\n", &a);
  // increment(a); // This won't work. The value of `a` won't be changed because of scope
  increment(&a);
  printf("a = %d", a);
}

