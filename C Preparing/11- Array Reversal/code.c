#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, * arr, i, s;
    scanf("%d", &num);
    arr = (int*)malloc(num * sizeof(int));
    for (i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    /* Write the logic to reverse the array. */
    s = num;
    int* rev = (int*)malloc(num * sizeof(int));
    for (i = 0; i < num; i++) {
        rev[i] = arr[s - 1];
        s--;
    }

    for (i = 0; i < num; i++) {
        printf("%d ", rev[i]);
    }
    return 0;
}
