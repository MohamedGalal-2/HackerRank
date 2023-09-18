#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int l = 1, max_and = 0, max_or = 0, max_xor = 0;

void calculate_the_maximum(int n, int k) {
	int size = n * n;
	int* and = malloc(size * sizeof(int));
	int* or = malloc(size * sizeof(int));
	int* xor = malloc(size * sizeof(int));

	for (int a = 1; a < n; a++) {
		for (int b = a + 1; b <= n; b++) {
			and [l] = a & b;
			or [l] = a | b;
			xor [l] = a ^ b;

			if (and [l] < k) {
				and [l] = and [l];
			}
			else {
				and [l] = 0;
			}
			if (or [l] < k) {
				or [l] = or [l];
			}
			else {
				or [l] = 0;
			}
			if (xor [l] < k) {
				xor [l] = xor [l];
			}
			else {
				xor [l] = 0;
			}
			l++;
		}
	}

	for (int x = 1; x < l; x++) {
		if (and [x] > max_and) {
			max_and = and [x];
		}
		if (or [x] > max_or) {
			max_or = or [x];
		}
		if (xor [x] > max_xor) {
			max_xor = xor [x];
		}
	}
	printf("%i\n%i\n%i\n", max_and, max_or, max_xor);

}

int main() {
	int n, k;
	scanf_s("%d %d", &n, &k);
	calculate_the_maximum(n, k);

	return 0;
}
