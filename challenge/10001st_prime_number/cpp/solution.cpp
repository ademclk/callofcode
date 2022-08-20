#include "solution.h"

unsigned long prime_number_10001() {
    std::deque<unsigned long> primes;
    primes.push_back(2);  // 2 is trivially a prime

    for (unsigned long curr = 3; primes.size() != 10001; curr++) {
        // check if the current number is a prime
        bool isPrime = true;
        for (auto it = primes.begin();
             it != primes.end() &&
             (*it) * (*it) <= curr;
             it++) {
            if (curr % (*it) == 0) {
                isPrime = false;
                break;
            }
        }

        // found a prime, record it
        if (isPrime) {
            primes.push_back(curr);
        }
    }

    return primes.back();
}
