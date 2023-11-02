// Francisco Alonso
// francisco79@csu.fullerton.edu
// @francisco-79
// Partners: @jrvh1113

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() != 4) {
    std::cout << "Error: "
              << "You must supply three arguments";
  }

  std::string command{arguments.at(1)};
  std::string first{arguments.at(3)};
  std::string second{arguments.at(2)};

  std::cout << "Your order: \n"
            << " A " << first << " sandwich on " << second << " with "
            << command << "\n";
  return 0;
}