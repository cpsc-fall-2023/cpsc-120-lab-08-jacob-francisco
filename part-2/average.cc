// Jacob Van Horn
// jvanhorn17@csu.fullerton.edu
// @jrvh1113
// Partners: @francisco-79

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() <= 1) {
    std::cout << "error: you must supply at least one number \n";
    return 1;
  }
  double total{0};
  int count{0};
  for (int input = 1; input < arguments.size(); input++) {
    double sum = std::stod(arguments[input]);
    total += sum;
    count++;
  }
  double average = {total / count};
  std::cout << "average  = " << average << " \n";
  return 0;
}
