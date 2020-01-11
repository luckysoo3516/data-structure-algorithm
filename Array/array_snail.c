#include <stdio.h>

int main()
{
    int arr[5][5] = {
        0,
    };
    int x = -1, y = 0, nCounter = 0;
    int nDirection = 1, nLength = 9;

    for (nLength = 9; nLength > 0; nLength -= 2)
    {
        for (int i = 0; i < nLength; i++)
        {
            if (i < nLength / 2 + 1)
                x += nDirection;
            else
                y += nDirection;

            arr[y][x] = ++nCounter;
        }
        nDirection = -nDirection;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
