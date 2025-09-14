#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, m, x, y;
        std::cin >> n >> m >> x >> y;

        std::vector<int> a(n), b(m);

        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }

        for (int j = 0; j < m; j++) {
            std::cin >> b[j];
        }

        int horizontal_crossing = std::lower_bound(a.begin(), a.end(), y) - a.begin();
        int vertical_crossing = std::lower_bound(b.begin(), b.end(), x) - b.begin();

        int total_crossings = horizontal_crossing + vertical_crossing;

        if (std::binary_search(a.begin(), a.end(), y) && std::binary_search(b.begin(), b.end(), x)) {
            total_crossings--;
        }
        std::cout << total_crossings << std::endl;
    }
}