#include <stdlib.h>
#include <stdio.h>

int findBigPalindrome() {
    int A = 100000, B = 10000, C = 1000, c = 100, b = 10, a = 1, T = 10, m, n, p, q = 1, r = 1, s = 1;
    /*
     * The product of the largest 3-digit number is 6 digits. That's why I specified 6 digits.
     * This number needs to be such a number that its format should be abccba.
     */
    int nDel, nLo, nHi, n11 = 999;
    for (m = 999; m > 99; --m) {
        nHi = n11;
        nDel = 11;

        if (m % 11 == 0) {
            nHi = 999;
            nDel = 1;
        }

        nLo = q / m - 1;
        if (nLo < m)
            nLo = m - 1;

        for (n = nHi; n > nLo; n -= nDel) {
            p = m * n; // checking if p is palindrome
            if (p % T == p / A && (p / B) % T == (p / b) % T && (p / C) % T == (p / c) % T) {
                q = p;
                break; // loop ending if p is biggest palindrome.
            }
        }
    }
    printf("Final result: %d\n", q);
    return 0;
}

int main() {
    findBigPalindrome();
}
