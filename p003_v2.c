#include <stdio.h>

int main()
{
    long n = 600851475143;
    long i;

    for (i = 2; i < n;  )
    {
        if (n % i == 0)
            n = n / i;
        else
            ++i;
    }
    printf("%ld\n", n);
}

