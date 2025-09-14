#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    int gain_a = 3;
    int gain_b = 2;
    int count = 0;

    while (a <= b) {
        a *= gain_a;
        b *= gain_b;
        count++;
    }

    std::cout << count << std::endl;
}