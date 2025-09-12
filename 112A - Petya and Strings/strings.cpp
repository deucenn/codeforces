#include <iostream>
#include <algorithm>

int main()
{
    std::string string_a, string_b;
    std::cin >> string_a;
    std::cin >> string_b;

    std::transform(string_a.begin(), string_a.end(), string_a.begin(), ::tolower);
    std::transform(string_b.begin(), string_b.end(), string_b.begin(), ::tolower);

    if (string_a < string_b) {
        std::cout << -1 << std::endl;
    } else if (string_a > string_b) {
        std::cout << 1 << std::endl;
    } else {
        std::cout << 0 << std::endl;
    }

    return 0;
}