#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}

int max_of_four(int a, int b, int c, int d)
{
    return max(a, b, c, d);
}

int max(x, y, z, l)
{
    if ((x > y) && (x > z) && (x > l)) {
        return x;
    }
    else if ((y > x) && (y > z) && (y > l)) {
        return y;
    }
    else if ((z > x) && (z > y) && (z > l)) {
        return z;
    }
    else {
        return l;
    }
}
