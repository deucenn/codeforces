#include <iostream>

int main() {
    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        int n, x;
        std::cin >> x >> n;

        int result = 0;

        for (int j = 0; j < n; j++) {
            if (j % 2 == 0) {
                result += x;
            } else if (j % 2 != 0) {
                result -= x;
            }
        }
        std::cout << result << std::endl;
    }
}