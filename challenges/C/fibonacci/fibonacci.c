#include <stdio.h>

int fiboSolver (int a) {
	int t1 = 0, t2 = 1;
	int nextterm = t1 + t2;
	printf("Fibonacci series: %d %d ", t1, t2);
	for (int i = 3; i <= a; i++) {
		printf("%d ", nextterm);
		t1 = t2;
		t2 = nextterm;
		nextterm += t1;
	}
}

int main () {
	int termVal;
	printf("Enter the number of terms: ");
	scanf("%d", &termVal);
	fiboSolver(termVal);
	return 0;
}
