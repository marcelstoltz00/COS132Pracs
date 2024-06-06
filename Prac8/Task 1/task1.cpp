#include "task1.h"
#include <iostream>
void sortNumbers(int &a, int &b, int &c)
{
    int tempA = a;
    int tempB = b;
    int tempC = c;
    if (tempA > tempB)
    {
        if (tempA > tempC)
        {
            // tempA is the largest
            a = tempA;
            if (tempC < tempB)
            {
                b = tempB;
                c = tempC;
            }
            else
            {
                b = tempC;
                c = tempB;
            }
        }
        else
        {
            // tempC is the largest
            a = tempC;
            b = tempA;
            c = tempB;
        }
    }
    else
    {
        // tempB >= tempA
        if (tempB > tempC)
        {
            // tempB is the largest
            a = tempB;
            if (tempC > tempA)
            {
                b = tempC;
                c = tempA;
            }
            else
            {
                b = tempA;
                c = tempC;
            }
        }
        else
        {
            // tempC is the largest
            a = tempC;
            if (tempA > tempB)
            {
                b = tempA;
                c = tempB;
            }
            else
            {
                b = tempB;
                c = tempA;
            }
        }
    }
};
void swap(int **ptrA, int **ptrB)
{
    int *temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
};