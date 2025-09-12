#include <iostream>

int main() {
    int n;
    std::cin >> n;
    
    int counter = 0;

    for (int i = 0; i < n; i++) {
        int a, b, c;
        std:: cin >> a >> b >> c;

        if ((a + b + c) >= 2) {
            counter++;
        };
    };
    std::cout << counter << std::endl;
}