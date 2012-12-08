#include <stdio.h>

int get_triangle_number(int n)
{
    int i;
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }

    return sum;
}

int get_divisors_number(int n)
{
    int count = 0;
    int j;

    for (j = 1; (j * j) <= n; j++)
    {
        if (n % j == 0)
        {
            count++;
        }
    }

    if ((j-1)*(j-1) == n)
        return (2*count-1);
    return (2*count);
}

int main()
{
    int number = 1;
    int count;
    int result;
    while(1)
    {
        result = get_triangle_number(number);
        count = get_divisors_number(result);

        if (count > 500)
        {
            break;
        }
        number++;
    }

    printf("result: %d\n", result);
}
