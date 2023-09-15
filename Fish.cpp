#include <iostream>
#include <cmath>

int main() {
    float n, i, j, t, s;
    std::cout << "Enter the size of fish" << std::endl;
    std::cin >> n;
    n = n + 14;
    s = n / 10;
    t = 4.72 / n;

    for (j = floor(s); j >= -ceil(s); j--) {
        for (i = 0; i <= 4; i = i + t) {
            if ((j < s / 2 && j > s / 4 && i < 1 && i > 0.8) || (j == 0 && i < 0.6) || (pow(j / s, 2) >= pow(sin(i), 2))) {
                std::cout << " ";
            } else {
                std::cout << "*";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
