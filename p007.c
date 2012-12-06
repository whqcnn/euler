// 找出第10001个质数是多少？
#include <stdio.h>

int is_prime(int k)
{
    int n;
    for (n = 2; n * n <= k; ++n)
    {
        if (k % n == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n = 3;
    int m = 1;

    for (n = 3; n < 20000000; n = n + 2)
    {
        if (is_prime(n))
        {
            m++;
            if (m == 10001)
            {
                printf("%d\n", n);
                break;
            }
        }
    }
}
