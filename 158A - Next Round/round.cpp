#include <iostream>
#include <vector>

int main() {
    int n, k;
    std::cin >> n >> k;

    std::vector<int> scores(n);
    for (int i = 0; i < n; i++) {
        std::cin >> scores[i];
    };

    int k_score = scores[k - 1];

    int advanced_users = 0;

    for (int score : scores) {
        if (score >= k_score && score > 0) {
            advanced_users++;
        };
    };

    std::cout << advanced_users << std::endl;
}