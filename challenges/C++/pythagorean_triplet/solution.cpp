#include "solution.hpp"

std::array<int, 3> pythaTriplet() {
    auto sq = [](int x) -> int {
        return x * x;
    };

    std::array<int, 3> triplet = {0, 0, 0};
    bool found = false;
    // since a + b + c = 1000
    // the max we can go is a = 332, b = 333, c = 334
    for (int a = 1; a <= 332 && !found; a++) {
        for (int b = a + 1; b <= 333 + (332 - a) && !found; b++) {
            int c = 1000 - (a + b);

            if (sq(a) + sq(b) == sq(c)) {
                triplet = {a, b, c};
                found = true;
            }
        }
    }

    return triplet;
}

/*
int main() {
    std::cout << "The values are: ";
    for (auto const &val : pythaTriplet()) {
        std::cout << val << " ";
    }

    std::cout << std::endl;
    // prints 200 375 425

    return 0;
}
*/
