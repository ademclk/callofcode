
// Factor all the integers from 1 to 20 into their prime factorizations. For example, factor 18 as 18 = 3^2 * 2. 
//Now, for each prime number p that appears in the prime factorization of some integer in the range 1 to 20, 
//find the maximum exponent that it has among all those prime factorizations. 
//For example, the prime 3 will have exponent 2 because it appears in the factorization of 18 as 3^2 and if it appeared in any prime factorization with an exponent of 3 (i.e., 3^3),
//that number would have to be at least as large as 3^3 = 27 which it outside of the range 1 to 20. 
//Now collect all of these primes with their corresponding exponent and you have the answer.


// So, as example, let's find the smallest number evenly divisible by all the numbers from 1 to 4.

// 2 = 2^1
// 3 = 3^1
// 4 = 2^2
// The primes that appear are 2 and 3. We note that the maximum exponent of 2 is 2 and the maximum exponent of 3 
// is 1. Thus, the smallest number that is evenly divisible by all the numbers from 1 to 4 is 2^2 * 3 = 12.

// Here's a relatively straightforward implementation.

#include <iostream>
#include <vector>



    std::vector<int> GetPrimes(int max) {
    bool *isPrime = new bool[max + 1];
    for(int i = 0; i <= max; i++) {
        isPrime[i] = true;
    }
    isPrime[0] = isPrime[1] = false;
    int p = 2;
    while(p <= max) {
        if(isPrime[p]) {
            for(int j = 2; p * j <= max; j++) {
                isPrime[p * j] = false;
            }
        }
        p++;
    }

    std::vector<int> primes;

    for(int i = 0; i <= max; i++) {
        if(isPrime[i]) primes.push_back(i);
    }

    delete []isPrime;
    return primes;
}

std::vector<int> Factor(int n, const std::vector<int> &primes) {
    std::vector<int> exponents(primes.size(), 0);
    while(n > 1) {
        for(int i = 0; i < primes.size(); i++) {
        if(n % primes[i] == 0) { 
        exponents[i]++;
            n /= primes[i];
        break;
        }
            }
    }
    return exponents;
}


int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    std::vector<int> primes = GetPrimes(n);
    std::vector<int> exponents(primes.size(), 0);

    for(int i = 2; i <= n; i++) {
        std::vector<int> factors = Factor(i, primes);
        for(int i = 0; i < exponents.size(); i++) {
            if(factors[i] > exponents[i]) exponents[i] = factors[i];
        }
    }

    int p = 1;
    for(int i = 0; i < primes.size(); i++) {
            for(int j = 0; j < exponents[i]; j++) {
            p *= primes[i];
        }
    }

    std::cout << "Answer: " << p << std::endl;
    

}

