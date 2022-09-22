package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
	"strconv"
	"strings"
)

func IsPrimeNumber(n int) bool {
	if n < 2 {
		return false
	} else if n == 2 {
		return true
	} else if n%2 == 0 {
		return false
	}

	for i := 3; i <= int(math.Sqrt(float64(n))); i += 2 {

		if n%i == 0 {
			return false
		}
	}
	return true
}

func FindSumOfPrimes(n int) int {
	if n < 2 {
		return 0
	}

	if IsPrimeNumber(n) {
		// fmt.Println(n)
		return n + FindSumOfPrimes(n-1)
	} else {
		return 0 + FindSumOfPrimes(n-1)
	}

}

func main() {

	scanner := bufio.NewScanner(os.Stdin)

	scanner.Scan()

	input := strings.TrimSpace(scanner.Text())
	N, _ := strconv.Atoi(input)

	if N <= 0 || N >= 5000000 {
		return
	}

	result := FindSumOfPrimes(N)

	fmt.Println(result)

}
