#include <iostream>

int main() {
    int m = 5;
    int n = 5;

    int input, m_position, n_position;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> input;
            if (input == 1) {
                m_position = i;
                n_position = j;
            }
        }
    }

    int fastest_way = 0;

    if (m_position != 2) {
        fastest_way += std::abs(m_position - 2);
    };
    if (n_position != 2) {
        fastest_way += std::abs(n_position - 2);
    }

    std::cout << fastest_way << std::endl;
}