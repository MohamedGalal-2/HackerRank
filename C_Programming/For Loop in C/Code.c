#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    // Complete the code.
    char labels[10][6] = { "zero","one","two","three","four",
    "five","six","seven","eight","nine" };
    if (a <= 9 && b <= 9) {
        for (int i = a; i <= b; i++) {
            printf("%s\n", labels[i]);
        }
    }
    else if (b > 9) {
        for (int i = a; i <= 9; i++) {
            printf("%s\n", labels[i]);
        }
        for (int x = 10; x <= b; x++) {
            if (x % 2 == 0) {
                printf("even\n");
            }
            else {
                printf("odd\n");
            }
        }
    }


    return 0;
}

