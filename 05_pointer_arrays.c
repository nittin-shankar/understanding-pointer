#include <stdio.h>
int main(){
  int array[] = {2, 4, 5, 8, 1};
  printf("%d\n", array); // This line gives the adress of the first element of the array
  printf("%d\n", &array[0]); // This also does the same thing as above but we could get the address of any index through this method
  printf("%d\n", array[0]); // This line outputs the value of the first element of the array
  printf("%d\n", *array); // This outputs the value of the memory addres that array is pointing to
  printf("%d\n", *(array + 0)); // This also does the same thing as above but does it for the second element of the array
}