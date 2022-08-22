#include <deque>
#include <iostream>

using namespace std;

unsigned long prime_10001st()
{

    deque<unsigned long> primelist; // list to store primes as they are found

    for (int i = 2; primelist.size() != 10001; i++) // 2 is the first prime number so we start our current number (i) at 2, iterate until our list has 10001 elements
    {
        bool isPrime = true; // first consider the number  we are looking at as prime (we will negate this later if we find a number that i can be
                             // divided by that leaves no remainder.. i.e. proves i is not prime)

        for (int j = 2; j < i; j++) // we want to iterate through each number from 2 up to the current number (i) so we can check the above mentioned condition
        {
            if (i % j == 0)      // if current number mod j leaves us with no remainder
                isPrime = false; // we know the current number is not prime and we modify isPrime to reflect this
        }

        // if isPrime is still true at this point we have found a prime, which we will add to the end of our list of primes
        if (isPrime)
        {
            primelist.push_back(i);
        }
    }

    return primelist.back(); // return the final value in the list of primes
}

/*  Uncomment to output answer to terminal
int main()
{
    cout << "The 10001st prime number is: ";
    cout << prime_10001st(); // call function defined above

    return 0;
}
*/
