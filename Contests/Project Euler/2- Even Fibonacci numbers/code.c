#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <math.h>

int main() {
	int t;
	long long sum_even = 0;
	long double gold_rat = (1 + sqrt(5)) / 2;
	long long Fibonacci_sequence[82] = { 0, 1, 1, 2 };
	for (int i = 2; i <= 81; i++) {
		Fibonacci_sequence[i] = Fibonacci_sequence[i - 1] + Fibonacci_sequence[i - 2];
	}

	scanf_s("%d", &t);
	if (t >= 1 && t <= 1000000) {
		for (int a0 = 0; a0 < t; a0++) {
			long long n;
			scanf_s("%lld", &n);
			if (n >= 10 && n <= 40000000000000000) {
				for (int i = 2; i <= 81; i++) {
					if (Fibonacci_sequence[i] % 2 == 0 && Fibonacci_sequence[i] <= n) {
						sum_even += Fibonacci_sequence[i];
					}
				}
				printf("%lld\n", sum_even);
				sum_even = 0;
			}
		}
	}
	return 0;
}