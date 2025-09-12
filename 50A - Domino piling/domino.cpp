#include <iostream>

int main() {
    int m, n;
    std::cin >> m >> n;

    int product = m * n;
    if (product % 2 != 0) {
        product--;
    };

    int result = product / 2;
    std::cout << result << std::endl;
}