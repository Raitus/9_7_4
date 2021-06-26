#include <iostream>
#include "string"

int main() {
  std::string str;
  std::cout << "Input string: " << std::endl;
  std::getline(std::cin, str);
  int count = 0;
  for (int i = 0; i < str.length(); i++) {
	if (str[i]!=' ') {
	  while (str[i]!=' ' && i < str.length()) {
		++i;
	  }
	  count++;
	}
  }
  std::cout << "Result: " << count;
  return 0;
}
