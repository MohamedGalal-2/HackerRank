#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int solveMeFirst(int a, int b) {
	// Hint: Type return a+b; below
	return a + b;
}

int main() {
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	int sum;
	sum = solveMeFirst(num1, num2);
	printf_s("%d", sum);
	return 0;
}
