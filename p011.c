// 第十一题：在这个20×20网格中，处于任何方向上（上，下，左，右或者对角线）的四个相邻数字的乘积的最大值是多少？
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int data[20][20];
    int y = 0;
    int n;
    int sum = 0;
    char line[100];
    char *pch;

    FILE *fp = fopen("p011.txt", "r");

    for (int x = 0; x < 20; x++)
    {
        y = 0;
        fgets(line, 100, fp);
        pch = strtok (line, " ");
        while (pch != NULL)
        {
            data[x][y] = atoi(pch);
            pch = strtok (NULL, " ");
            y++;
        }
    }
    fclose(fp);

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 17; j++)
        {
            n = data[i][j] * data[i][j+1] * data[i][j+2] *data[i][j+3];
            if (n > sum)
                sum = n;
        }
    }

    for (int i = 0; i < 17; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            n = data[i][j] * data[i+1][j] * data[i+2][j] *data[i+3][j];
            if (n > sum)
                sum = n;
        }
    }

    for (int i = 0; i < 17; i++)
    {
        for (int j = 0; j < 17; j++)
        {
            n = data[i][j] * data[i+1][j+1] * data[i+2][j+2] *data[i+3][j+3];
            if (n > sum)
                sum = n;
        }
    }

    for (int i = 0; i < 17; i++)
    {
        for (int j = 3; j < 20; j++)
        {
            n = data[i][j] * data[i+1][j-1] * data[i+2][j-2] *data[i+3][j-3];
            if (n > sum)
                sum = n;
        }
    }
    printf("%d\n", sum);
}

