#include "solution.h"

int odd_fib_sum() {
    std::array<int, 2> fib_buffer = {0, 1};
    int fib_sum = 0;
    int fib_next = 1;  // fib(1) = 1
    while (fib_next < 10000) {
        if (fib_next % 2 == 1) {
            fib_sum += fib_next;
        }

        fib_next = fib_buffer[0] + fib_buffer[1];
        fib_buffer[0] = fib_buffer[1];
        fib_buffer[1] = fib_next;
    }

    return fib_sum;
}
