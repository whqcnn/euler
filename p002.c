#include <stdio.h>

int main()
{
    int n = 1;
    int m = 1;
    int b = 0;

    while (m < 4000000)
    {
        m = m + n;
        n = m - n;
        if (m % 2 == 0)
            b = b + m;
    }
    printf("%d\n", b);
}


