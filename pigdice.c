#include <stdio.h>

int playerScore;
int cpuScore;
int dice1;
int dice2;
int turn;

void initGame() {
  turn = 0;
  playerScore = 0;
  cpuScore = 0;
}

void rollDice() {
  dice1 = 6;
  dice2 = 6;
}

void displayScore() {
  printf("\n");
  printf("\tHuman: %d\tCPU:%d", playerScore, cpuScore);
  printf("\n");
}

int main() {

  printf("Welcome to PIG - a simple dice game!\n\n");

  displayScore();

  return 0;
}
