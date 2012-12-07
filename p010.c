// 计算两百万以下所有质数的和

#include <stdio.h>

int numb(int k)
{
    int n = 2;
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
    long int m = 0;    // 因为所有质数之和大于int值的范围所以用long int

    for (n = 3; n < 2000000; n += 2)
    {
        if (numb(n))
            m = m + n;
    }
    printf ("%ld\n", (m + 2));
}

