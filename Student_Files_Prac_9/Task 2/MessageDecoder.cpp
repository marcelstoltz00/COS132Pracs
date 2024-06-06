#include "MessageDecoder.h"
#include <iostream>
//#include <string>
//#include <array>
using namespace std;

/*const std::array<char, 64> Base64 = {
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
    'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '/'};
*/
// or

const string Base64 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

int findIndex(char c)
{
    for (int icount = 0; icount < 64; icount++)
    {

        if (Base64[icount] == c)
        {
            return icount;
        }
    }
    return -1;
};
void decodeBase64(const char encoded[], char decoded[], int encodedLength)
{
    int index, i = 0;
    int idx0, idx1, idx2, idx3;
    int decTracker = 0;
    char bit1, bit2, bit3;

    while (i < encodedLength)
    {
       // if (i + 3 < encodedLength)
        {
            idx0 = findIndex(encoded[i]);
            idx1 = findIndex(encoded[i + 1]);
            idx2 = findIndex(encoded[i + 2]);
            idx3 = findIndex(encoded[i + 3]);

            bit1 = (idx0 * 4) + (idx1 / 16);
            bit2 = ((idx1 % 16) * 16) + (idx2 / 4);
            bit3 = (((idx2 % 4) * 64) + idx3);

            decoded[decTracker++] = bit1;
            decoded[decTracker++] = bit2;
            decoded[decTracker++] = bit3;
           // decTracker+=3;
            
            i += 4;
        }
      //  cout<<bit1<<bit2<<bit3<<endl;
    }
    decoded[decTracker] = '\0';
};
