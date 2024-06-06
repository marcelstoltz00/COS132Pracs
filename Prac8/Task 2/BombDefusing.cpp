#include "BombDefusing.h"
#include <iostream>
int calculateSize(int *arr)
{
    int size = 0;
    while (arr[size] != -1)
    {
        if (arr[size] == '\0')
            break;

        size++;
    }
    return (size);
};
void findPairs(int *arr, int size)
{
    //   int i, j;
    bool *paired = new bool[size];

    for (int i = 0; i <= (size); i++)
    {
        paired[i] = false;
    }

    std::cout << "Starting wire comparison...\n";

    // nested loops

    for (int i = 0; i < size; i++)
    {
        if (paired[i])
            continue;
        bool found = false;
        for (int j = i + 1; j < size; j++)
        {

            if (arr[i] == arr[j])
            {

                std::cout << "Match found: Wire " << i + 1 << " and Wire " << j + 1
                          << " (Value: " << arr[i] << ") are a pair.\n";
                found = true;
                paired[i] = true; // change value
                paired[j] = true;
                break;
            }
        }
        if (found == false)
        {
            std::cout << "No match found for Wire " << i + 1 << " (Value: " << arr[i]
                      << "). Cut this wire to defuse the bomb!\n";
        }
    }
    delete[] paired;
};