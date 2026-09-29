#include <cstdlib>
#include <ctime>
#include <iostream>

bool randomPlayer() {
  int result = rand() % 2 + 1;

  return result == 1;
}

int main() {
  srand(time(0));

  bool result = randomPlayer();

  std::cout << result << std::endl;

  return 0;
}