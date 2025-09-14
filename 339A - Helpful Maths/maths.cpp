#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::string input;
    std::cin >> input;

    if (input.length() <= 1) {
        std::cout << input << std::endl;
        return 0;
    }

    std::vector<int> numbers;

    for (char ch : input) {
        if (isdigit(ch)) {
            numbers.push_back(ch - 48);
        }
    };

    std::sort(numbers.begin(), numbers.end());

    for (size_t i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i];
        if (i != numbers.size() - 1) {
            std::cout << "+";
        }
    }

    return 0;
}