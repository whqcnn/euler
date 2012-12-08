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

int main()
{
    int number = 1;
    int count;
    int result;
    while(1)
    {
        count = 1;
        result = get_triangle_number(number);
        for (int j = 1; (j * j) <= result; j++)
        {
            if (result % j == 0)
            {
                count++;
            }
        }
        number++;
        if (number % 100 == 0)
            printf("%d - %d -%d\n", number, result, count);

        if (2 * count > 500)
            break;
    }

    printf("result: %d\n", result);
}
