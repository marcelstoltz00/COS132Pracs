#include "loop.h"
#include <cmath>
using namespace std;

void printCollatz(int num)
{
    //
    cout << "Starting from " << num << "\n";

    while (num != 1)
    {

        cout << num << "\n";

        (num % 2 == 0) ? (num = num / 2) : (num = 3 * num + 1);
    }

    cout << num << "\n";

    // Add your implementation here
}

void printSquares(int n)
{
    int isq;

    for (isq = 1; isq <= n; isq++)
    {

        cout << "Square of " << isq << " is " << isq * isq << "\n";
    }

    // Add your implementation here
}

void printDiamond(int halfSize)
{
    // Add your implementation here
    // upper part of the diamond

    for (int irow = 1; irow <= halfSize; irow++)
    {
        // print spaces
        for (int ispace = 0; ispace < halfSize - irow; ispace++)
        {
            cout << " ";
        }
        // print stars
        for (int istars = 0; istars < (2 * irow) - 1; istars++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // lower part of the diamond

    for (int irow = halfSize - 1; irow >= 1; irow--)
    {
        // spaces
        for (int i = 0; i < halfSize-irow; i++)
        {
            cout << " ";
        }
        for (int j = 0; j < irow * 2 - 1; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }
}