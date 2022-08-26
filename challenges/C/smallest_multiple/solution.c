#include <stdio.h>

typedef unsigned long long ULL;

ULL gcf(ULL n1, ULL n2) {
	return n2 == 0 ? n1 : gcf(n2, n1%n2);
}

ULL lcm(ULL n1, ULL n2) {
	return n1*n2 / gcf(n1, n2);
}

int main(void) {
	// calculate lcm(1, 2, 3, ..., 18, 19, 20).
	ULL res = lcm(1,2);
	for(ULL i=3; i<21; ++i) {
		res = lcm(res, i);
	}
	printf("%d\n", res);
}
