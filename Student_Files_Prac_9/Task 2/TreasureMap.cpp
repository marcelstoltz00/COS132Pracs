#include "TreasureMap.h"
#include <iostream>
//#include <string>
#define ROWS 4
#define COLS 5
bool findTreasure(char map[ROWS][COLS], int jumps[], int jumpsLength, char *result)
{
    int index = 0;
    int irow, icol = 0;
    int ijump;
    for (int ij = 0; ij < jumpsLength; ij++)
    {
        ijump = jumps[ij];

        icol = ijump % COLS;
        irow = ijump / COLS;

         if (irow < 0 || irow >= ROWS || icol < 0 || icol >= COLS)//check if we're in bounds
        {
           
            return false;
        }



        if (map[irow][icol] == 'X')
        {
            result[index] = '\0';
            return true;
        }
        else
        {
            if (map[irow][icol] != '-')
            {
                result[index] = map[irow][icol];
                index++;
            }
        }
    }
    result[index] = '\0';
    return false;
}