#include <iostream>
#include <cstdlib>

int main() {
  std::cout << "MAGIC 8-BALL: \n\n";
  srand(time(NULL));
  int answer = std::rand() % 10;
  std::cout << answer;

switch(answer) {
    case 0:
      std::cout << " It's unlikely.\n";
      break;
    case 1:
      std::cout << " Try again.\n";
      break;
    case 2:
      std::cout << " Better luck next time.\n";
      break;
    case 3:
      std::cout << " It is meant to be.\n";
      break;
    case 4:
      std::cout << " Doubtful.\n";
      break;
    case 5:
      std::cout << " I am certain.\n";
      break;
    case 6:
      std::cout << " I don't know.\n";
      break;
    case 7:
      std::cout << " Who am I?.\n";
      break;
    case 8:
      std::cout << " I believe in you.\n";
      break;
    case 9:
      std::cout << " You can do it.\n";
      break;
    default:
      std::cout << " Try again.\n";
      break;
  }
}