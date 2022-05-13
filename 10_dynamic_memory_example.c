#include <stdio.h>
#include <stdlib.h>

// This program is only possible with the help of pointers

// Ask doubt with dad at 02:43:00

int main(){
  int n;
  printf("Enter size of array\n");
  scanf("%d", &n);

  int *array = (int*) malloc(n*sizeof(int));

  for (int i = 0; i < n; i++){
    array[i] = i + 1;
  }

  // free(array);
  // array = NULL;

  for (int i = 0; i < n; i++){
    printf("%d ", array[i]);
  }
}