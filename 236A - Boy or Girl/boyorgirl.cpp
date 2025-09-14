#include <iostream>
#include <algorithm>

int main() {
    std::string input;
    std::cin >> input;

    sort(input.begin(), input.end());
    input.erase(std::unique(input.begin(), input.end()), input.end());
    if (input.size() % 2 == 0) {
        std::cout << "CHAT WITH HER!" << std::endl;
    } else {
        std::cout << "IGNORE HIM!" << std::endl;
    }
}