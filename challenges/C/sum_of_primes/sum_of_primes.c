#include <stdbool.h>
#include <stdio.h>

bool isPrime(int n)
{
	if (n == 1 || n == 0)
		return false;

	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int N;
	printf("Enter the last number at which the counter will stop: ");
	scanf("%d", &N);
	int toplam = 0;
	for (int i = 1; i <= N; i++) {
		if (isPrime(i))
			toplam += i;
	}

	printf("%d", toplam);
	return 0;
}
