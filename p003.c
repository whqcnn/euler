#include <stdio.h>

long is_prime(long n)
{
    long k = 2;
    for (k = 2; k * k <= n; ++k)
    {
        if (n % k == 0)
            return 0;
    }
    return 1;
}

int main()
{
    long max = 0;
    long N = 600851475143L;
    long i = 2;
    for (; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            if (is_prime(N / i))
            {
                if (N / i > max)
                    max = N / i;
            }
            if (is_prime(i))
            {
                if (i > max)
                    max = i;
            }
        }
    }
    printf("%ld\n", max);
}
