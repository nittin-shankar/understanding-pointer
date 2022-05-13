#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cash = 100;

void play(int bet){
  char *c = (char*) calloc(3, sizeof(char));
  c[0] = 'J';
  c[1] = 'Q';
  c[2] = 'K';

  printf("Shuffling...");
  srand(time(NULL));  // Seeding the random number generator

  int i;
  for(i = 0; i<5; i++){
    int x = rand() % 3;
    int y = rand() % 3;
    int temp = c[x];
    c[x] = c[y];
    c[y] = temp; // Swaps charaacter from x and y
  }

  int playersGuess;
  printf("What's the position of the queen - 1, 2 or 3?");
  scanf("%d", &playersGuess);

  if(c[playersGuess - 1] == 'Q'){
    cash += 3*bet;
    printf("You win ! Result = /%c %c %c/ \n Total cash = %d\n", c[0], c[1], c[2], cash);
  } else{
    cash -= bet;
    printf("You loose ! Result = /%c %c %c/ \n Total cash = %d\n", c[0], c[1], c[2], cash);
  }

  free(c); // If this line isn't called, then we'd suffer from the buggy memory leak
}

int main(){
  puts("**Welcome to virtual casino**");
  int bet;
  while(cash > 0){
    printf("Total cash: %d", cash);
    printf("What's your bet? $");
    
    scanf("%d", &bet);
    if (bet == 0 || bet > cash) break;
    play(bet);
  }
}