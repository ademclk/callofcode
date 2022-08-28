#include "solution.hpp"

std::array<int, 3> pythaTriplet() {
    auto sq = [](int x) -> int {
        return x * x;
    };

    std::array<int, 3> triplet = {0, 0, 0};
    bool found = false;
    // since a + b + c = 1000
    // and a < b < c
    // the max we can go is a = 332, b = 333, c = 334
    for (int a = 1; a <= 332 && !found; a++) {
        // the maximum b can reach is when a = 1
        // then b = 999 - c_min
        // and since b < c they must be consecutive numbers
        // which nets b = 499
        for (int b = a + 1; b <= 499 && !found; b++) {
            int c = 1000 - (a + b);

            // b < c always
            if (c <= b) {
                break;
            }

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
