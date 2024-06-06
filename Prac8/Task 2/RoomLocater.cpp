#include "RoomLocater.h"
#include <iostream>
int substringSearch(const char *str, const char *substr)
{
    const char *ptr1 = str;
    const char *ptr2 = substr;

    while (*ptr1 != '\0')
    {
        const char *start = ptr1;
        ptr2 = substr;

        while ((*ptr2 != '\0') && (*ptr1 == *ptr2))
        {

            ptr1++;
            ptr2++;
        }
        if (*ptr2 == '\0')
        {
            return (start - str);
        }
        ptr1 = start + 1;
    }
    return -1;
};
void indexToChar(int index)
{

    std::cout << "Floor: " << index << ", Room: " << static_cast<char>(index) << std::endl;
};