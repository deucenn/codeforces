#include <iostream>

int main() {
    int n;
    std::cin >> n;

    std::string stones;
    std::cin >> stones;

    int result = 0;

    for (int i = 0; i < n; i++) {
        if (stones[i] == stones[i+1]) {
            result++;
        }
    }

    std::cout << result << std::endl;
}