#include <stdio.h>

// The compiler doesn't create a copy of the array when an array argument is given. It only creates a pointer pointing to the array given as argument
/* 
// This is how the compiler inteprets the array arguments of a fucntion
int sumOfElements(int *numbers);
*/

int sumOfElements(int numbers[], int size){
  int sum = 0;
  for (int i = 0; i < size; i++){
    sum+= numbers[i];
  }
  


  return sum;
}

void Double(int *numbers, int size){
  for (int i = 0; i < size; i++){
    numbers[i] = 2 * numbers[i];
  }
}

int main() {
  int numbers[] = {1, 2, 3, 4, 5};

  int size = sizeof(numbers) / sizeof(numbers[0]);
  
  int total = sumOfElements(numbers, size);
  printf("The sum of elements = %d\n", total);

  Double(numbers, size);

  // Printing all elements in the array
  for (int i = 0; i < size; i++){
    printf("\n%d", numbers[i]);
  }
  
  return 0;
}