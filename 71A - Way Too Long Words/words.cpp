#include <iostream>

int main() {
    int n, counter;
    std::cin >> n;

    for (int i = 0; i <= n; i++) {
        std::string input;
        std::cin >> input;

        if (input.length() > 10) {
            std::cout << input[0];
            std::cout << input.length() - 2;
            std::cout << input[input.length() - 1];
        } else {
            std::cout << input;
        };
        std::cout << std::endl;
    }
}