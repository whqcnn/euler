#include <stdio.h>

int hw(int n)
{
    int s = 0, t = n;
    while(n)
    {
        s = (n % 10) + s * 10;
        n /= 10;
    }
    return t == s;
}

int main(void)
{
    int i , j , mul = 0, hws = 0;
    int i1, j1;
    for (i = 999; i >= 100; i--)
    {
        for (j = 999; j >= 100; j--)
        {
            if (hw(i * j))
            {
                mul = i * j;
                  if (hws <= mul)
                    {
                        hws = mul;
                        i1 = i;
                        j1 = j;
                    }
                break;
            }
        }
    }
    printf("The result is : %d = %d * %d\n", hws, i1, j1);

    return 0;
}

