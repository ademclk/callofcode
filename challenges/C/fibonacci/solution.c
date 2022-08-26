#include <stdio.h>

int fib(int n1, int n2) {
	return n2 <= 10000 ? fib(n2, n1+n2) + (n2%2 == 1 ? n2 : 0) : 0;
}

int main(void) {
	printf("%d\n", fib(0, 1));
}
