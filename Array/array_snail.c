#include <stdio.h>
//   1  2  3  4  5
//  16 17 18 19  6
//  15 24 25 20  7
//  14 23 22 21  8
//  13 12 11 10  9
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
