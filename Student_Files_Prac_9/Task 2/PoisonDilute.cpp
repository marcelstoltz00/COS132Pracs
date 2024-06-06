#include "PoisonDilute.h"
int *findNthLargest(int *arr, int size, int n, int *largest)
{

    // loop to find biggest
    int bIndex, lindex = 0;

    for (int i = 0; i < n; i++)
    {
        bIndex = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[bIndex] < arr[j])
            {
                bIndex = j;
            }
        }

        largest[lindex] = arr[bIndex];
        arr[bIndex] = 0;
        lindex++;
    }

    // sort largest

    int temp;
    for (int k = 0; k < n - 1; k++)
    {
        for (int j = 1 + k; j < n; j++)
        {
            if (largest[k] > largest[j])
            {
                temp = largest[k];
                largest[k] = largest[j];
                largest[j] = temp;
            }
        }
    }

    return largest;
}