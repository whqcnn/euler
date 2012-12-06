// 找出唯一的满足a + b + c = 1000的毕达哥拉斯三元组{a, b, c}
#include <stdio.h>

#define S 1000

int main()
{
    int a, b, c;

    for (a = 1; a < S/3; a++)
    {
        for (b = (S-a)/2; b >= a; b--)
        {
            c = (S-a-b);
            if ((a*a + b*b) == (c*c))
                printf("a: %d b: %d c: %d\n", a, b, c);
        }
    }
}

