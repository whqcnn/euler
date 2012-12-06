#include <stdio.h>
#include <stdarg.h>

int main()
{
    int numbers[1000];
    int max = 0;
    int n = 0;
    char len[100];

    FILE *fp = fopen("p008.txt", "r");
    while(fgets(len, 100, fp))
    {
        for(int i = 0; i < 50; i++)
            numbers[n+i] = len[i]-'0';
        n += 50;
    }
    fclose(fp);
    for (int i = 0; i < 995; i++)
    {
        n = numbers[i]*numbers[i+1]*numbers[i+2]*numbers[i+3]*numbers[i+4];
        if (n > max)
        {
            max = n;
        }
    }
    printf("%d\n", max);
}
