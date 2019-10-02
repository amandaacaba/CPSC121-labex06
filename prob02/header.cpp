#include <iostream>
#include <string>
#include "header.hpp"

void display_header(std::string header) {

  for (int i = 0; i < header.length() + 4; i++) {
        std::cout << "*";
  }

  std::cout << "\n" << "* " << header << " *" << "\n";

  for (int i = 0; i < header.length() + 4; i++) {
        std::cout << "*";
  }

  std::cout << "\n";

}

bool within_width(std::string header, unsigned short int width) {

  if ((header.length() + 4) <= width) {
    return true;
  }
  else {
    return false;
  }

}
