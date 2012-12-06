// 前一百个自然数的平方和与和平方的差？
#include <stdio.h>

int main()
{
    int i;
    int sum1 = 0;
    int sum2 = 0;

    for (i = 100; i >= 1; i--)
    {
        sum1 += i*i;
        sum2 += i;
    }

    printf("%d\n", ((sum2*sum2)-sum1));
}
