#include <stdio.h>
#include <math.h>

int checkIsEqual (int a, int b, int c) {
	if (pow(a, 2) + pow(b, 2) == pow(c, 2))
		return 1;
	else
		return 0;
}

int pythagoTriplet () {
	for(int a = 1; a <= 332; a++) {
		for (int b = a + 1; b <= 499; b++) {
			int c = 1000 - (a + b);
			if (c < b && c == b)
				break;

			if (checkIsEqual(a, b, c) == 1)
				printf("Triplet is found!\nA value is: %d\nB Value is: %d\nC value is: %d\n", a, b, c);
		}
	}
}

int main () {
	pythagoTriplet();
	return 0;
}
