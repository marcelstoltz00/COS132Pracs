// NumberUtils.cpp
#include "NumberUtils.h"
#include <cmath>

int reverseInteger(int number)
{
    int reversed = 0;

    while (number != 0)
    {
        int lastdigit = number % 10;
        reversed *= 10;
        reversed += lastdigit;
        number /= 10;
    }
    return reversed;
};
bool isPalindrome(int number)
{
    int revnumber = reverseInteger(number);
    (revnumber == number) ? ({ return true; }) : ({ return false; });
};
int sumOfDigits(int number)
{
    int sum = 0;
    while (number != 0)
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;
};
int getNumberOfDigits(int number)
{

    int digits = 0;
    while (number != 0)
    {
        digits++;
        number /= 10;
    }
    return digits;
};
bool isArmstrong(int number)
{
    int original = number;
    int digits = getNumberOfDigits(number);

    int sum = 0;
    while (number != 0)
    {
        int singledigit = number % 10;
        sum += pow(singledigit, digits);
        number /= 10;
    }

    (original == sum) ? ({ return true; }) : ({ return false; });
};
bool isPerfect(int number)
{

    int sum = 0;

    for (int icount = 1; icount < number; icount++)
    {

        (number % icount == 0) ? ({ sum += icount; }) : ({ sum = sum; });
    }
    return (sum == number);
};