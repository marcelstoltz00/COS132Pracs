// Decipher.cpp
#include <iostream>
#include "NumberUtils.h"
#include "StringUtils.h"
#include "Decipher.h"
using namespace std;
char shiftCharacter(char input, int shift)
{
    char base;
    if ((input >= 'A') && (input <= 'Z'))
    {
        base = 'A';
    }
    if ((input >= 'a') && (input <= 'z'))
    {
         base = 'a';
    }

    int offset = input - base;
    int shiftedindex = (shift + offset) % 26;
    if (shiftedindex < 0) {
        shiftedindex += 26; // Ensure positive shiftedIndex
    }
        char result = shiftedindex + base;
        return result;
    
};
string decipher(int num1, string str1, int num2, string str2)
{

if (isPalindrome(num1)) {
        str1 = returnDecodedString(str1, sumOfDigits(num1));
    }

    if (isArmstrong(num2)) {
        str2 = returnDecodedString(str2, sumOfDigits(num2));
    }

    return str1 + "-" + str2;





   // (isPalindrome(num1)) ? ({ str1 = returnDecodedString(str1, sumOfDigits(num1)); }) : ({ str1 = str1; });
 //   (isArmstrong(num2)) ? (str2 = returnDecodedString(str2, sumOfDigits(num2))) : ({ str2 = str2; });
  //  return (str1 + '-' + str2);
};