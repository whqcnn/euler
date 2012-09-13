#include <stdio.h>

int main()
{
    int a, b, c, n, m, k;

    a = b = c = n = m = k = 0;
    while (a < 1000) {
        n = n + a;
        a = a + 3;
    }
    while (b < 1000) {
        m = m + b;
        b = b + 5;
    }
    while (c < 1000) {
        k = k + c;
        c = c + 15;
    }
    printf("%d\n", n + m - k);
}

