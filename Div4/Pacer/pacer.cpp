#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, m;
        std::cin >> n >> m;

        std::vector<std::pair<int, int>> requirements;

        for (int i = 0; i < n; i++) {
            std::cin >> requirements[i].first >> requirements[i].second;
        }
    }
}