#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int n, sum, Array_of_digits[4];
int main() {


    scanf("%i", &n);
    //Complete the code to calculate the sum of the five digits on n.
    Array_of_digits[0] = (n / 10000) % 10;
    Array_of_digits[1] = (n / 1000) % 10;
    Array_of_digits[2] = (n / 100) % 10;
    Array_of_digits[3] = (n / 10) % 10;
    Array_of_digits[4] = n % 10;

    for (int i = 0; i < 5; i++)
    {
        sum += Array_of_digits[i];
    }
    printf("%d", sum);
    return 0;
}
