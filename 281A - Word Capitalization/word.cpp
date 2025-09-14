#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cin >> input;

    std::cout << (char) toupper(input[0]) << input.substr(1, input.length() - 1) << std::endl;
}