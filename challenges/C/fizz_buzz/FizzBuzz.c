#include <stdio.h>

int main(int argc, char const *argv[]) {
	int i = 1, n = 100;

	for(; i <= n; i++) {
		if(i % 3 == 0 && i % 5 == 0) {
			printf("FizzBuzz\n");
		}
		else if(i % 3 == 0) {
			printf("Fizz\n");
		}
		else if(i % 5 == 0) {
			printf("Buzz\n");
		}
		else {
			printf("%d\n", i);
		}
	}

	return 0;
}
