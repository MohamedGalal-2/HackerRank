#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
	int length = 0;
	char* str = (char*)malloc(1024 * sizeof(char));

	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	scanf("\n%[^\n]", str);

	length = strlen(str);
	int digit_frequency[10] = { 0 };

	for (int i = 0; i < length; i++) {
		int ascii_of_zero = 48;
		if (ascii_of_zero == (int)str[i]) {
			digit_frequency[0]++;
		}
		else if (ascii_of_zero + 1 == (int)str[i]) {
			digit_frequency[1]++;
		}
		else if (ascii_of_zero + 2 == (int)str[i]) {
			digit_frequency[2]++;
		}
		else if (ascii_of_zero + 3 == (int)str[i]) {
			digit_frequency[3]++;
		}
		else if (ascii_of_zero + 4 == (int)str[i]) {
			digit_frequency[4]++;
		}
		else if (ascii_of_zero + 5 == (int)str[i]) {
			digit_frequency[5]++;
		}
		else if (ascii_of_zero + 6 == (int)str[i]) {
			digit_frequency[6]++;
		}
		else if (ascii_of_zero + 7 == (int)str[i]) {
			digit_frequency[7]++;
		}
		else if (ascii_of_zero + 8 == (int)str[i]) {
			digit_frequency[8]++;
		}
		else if (ascii_of_zero + 9 == (int)str[i]) {
			digit_frequency[9]++;
		}
	}

	for (int j = 0; j < 10; j++) {
		printf("%i ", digit_frequency[j]);
	}
	return 0;
}
