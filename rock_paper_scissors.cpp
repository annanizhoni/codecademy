//Rock, paper scissors, lizard, spock game
#include <iostream>
#include <stdlib.h>

int main() {
  srand (time(NULL));

  int computer = rand() % 3 + 1;

  int user = 0;
  int rock = 1;
  int paper = 2;
  int scissors = 3;
  int lizard = 4;
  int spock = 5;

  std::cout << "======================================\n";
  std::cout << "rock, paper, scissors, lizard, spock!\n";
  std::cout << "======================================\n";

//Scissors cuts Paper.
//Paper covers Rock.
//Rock crushes Lizard.
//Lizard poisons Spock.
//Spock smashes Scissors.
//Scissors decapitate Lizard.
//Lizard eats Paper.
//Paper disproves Spock.
//Spock vaporizes Rock.
//Rock crushes Scissors.

  std::cout << "1) rock\n";
  std::cout << "2) paper\n";
  std::cout << "3) scissors\n";
  std::cout << "4) lizard\n";
  std::cout << "5) spock\n\n";

  std::cout << "shoot! \n";
  std::cin >> user;
  
  std::cout << "computer: " << computer << "\n\n";
  
  if (user == rock && computer == scissors) {
      
    std::cout << "You Win!\n";
    
  } else if (user == scissors && computer == paper) {
    
    std::cout << "You Win!\n";
    
  } else if (user == paper && computer == rock) {
    
    std::cout << "You Win!\n";
      
  } else if (user == lizard && computer == spock) {
      
    std::cout << "You Win!\n";
      
  } else if (user == spock && computer == scissors) {
      
    std::cout << "You Win!\n";
      
  } else if (user == scissors && computer == lizard) {
      
    std::cout << "You Win!\n";
      
  } else if (user == lizard && computer == paper) {
      
    std::cout << "You Win!\n";
      
  } else if (user == paper && computer == spock) {
      
    std::cout << "You Win!\n";
      
  } else if (user == spock && computer == rock) {
      
    std::cout << "You Win!\n";
      
  } else if (user == rock && computer == lizard) {
      
    std::cout << "You Win!\n";
      
  } else if (user == computer) {
      
    std::cout << "Tie!\n";
      
  } else {
      
    std::cout << "You Lose!\n";
      
  }
  
}