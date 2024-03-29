#include <iostream>
#include "header.hpp"

int main() {
  std::string text;
  std::cout << "Please enter header text: ";
  std::getline(std::cin, text);

  if (within_width(text, 80)) {
    // call the display_header function and pass in the text
    // inputted by the user
    display_header(text);
  } else {
    std::cout << text;
  }
  return 0;
}
