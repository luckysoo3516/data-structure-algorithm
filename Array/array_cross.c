#include <stdio.h>
// 1 2 3 4 5 
// 10 9 8 7 6 
// 11 12 13 14 15 
// 20 19 18 17 16 
// 21 22 23 24 25 
int main()
{
    int arr[5][5] = {
        0,
    };
    int nCounter = 0;
    int nFlag = 1;

    for (int i = 0; i < 5; i++)
    {
        if (nFlag)
        {
            for (int j = 0; j < 5; j++)
            {
                nCounter++;
                arr[i][j] = nCounter;
            }
            nFlag = 0;
        }
        else
        {
            for (int j = 0; j < 5; j++)
            {
                nCounter++;
                arr[i][4 - j] = nCounter;
            }
            nFlag = 1;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
