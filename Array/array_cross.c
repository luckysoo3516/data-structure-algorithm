#include <stdio.h>

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
