#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    int x = 0;

    for (int i = 0; i < n; i++) {
        std::string input;
        std::cin >> input;

        if (input.find("++") != std::string::npos) {
            x++;
        } else if (input.find("--") != std::string::npos) {
            x--;
        } else {
            x = x;
        }
    }

    std::cout << x << std::endl;
    return 0;
}