#include "DynamicArray.h"
#include <iostream>
#include <string>
using namespace std;


int getsize() {};
void NewArray(int size) {};
void initialiseAarray() {};
void putValue(int, int) {};
int getvalue() {};
void resize(int) {};
void deleteArray() {};

int main()
{
    // all on the stack
    int example[5];
    for (int i = 0; i < 5; ++i)
        example[i] = 2;
    int *ptr = example; // same as saying &example[0]
    example[2] = 5;     // this is the same as saying
    *(ptr + 2) = 5;     // this
    // or this
    *(int *)((char *)ptr + 8) = 5;
    /// all on the heap;

    int *another;
    another = new int[5]; // alive until we destroy

    for (int i = 0; i < 5; ++i)
        another[i] = 2;

    delete[] another;
    cout << example[0] << endl;
    cout << example << endl;

    /////strings
    // group of char text
    //  what are char? string is an array of char,an array being a set of elements

    char *name = "Cherno"; // will print until '\0' is found
    // is the same as
    char name2[7] = {'C', 'h', 'e', 'r', 'n', 'o', '\0'};
    // with string library

    string name3 = "Cherno";
    // you can add strings like this
    name3 += "hello";
    /// multi dimensional arrays
    /*
    array of arrays
    pointer to the beginning of the array
    an array of those pointers is a 2D
    collection of pointers to arrays

  int ***a3d = new int **[50]; // we're allocating 50 pointers...you're just allocating memory...this a2d array stores the location of the 50 arrays
    for (int i = 0; i < 50; ++i)
    {
        a3d[i] = new int *[50]; // we've allocated 50 arrays,which point to 50 other arrays
        for (int j = 0; j < 50; ++j)
        {
            a3d[i][j] = new int[50];
        }
    }
}

    */

    int *array = new int[50]; // 50 *4 bytes per int = allocating 200 bytes of memory

    // another way of doing this:
    // pointer to a pointer to an integer (read backwards)
    int **a2d = new int *[50]; // we're allocating 50 pointers...you're just allocating memory...this a2d array stores the location of the 50 arrays
    for (int i = 0; i < 50; ++i)
    {
        a2d[i] = new int[50]; // we've allocated 50 arrays,
    }

    //but you have to delete everything else as well

    for(int i=0;i<50;i++){


        delete[] a2d[i];
    }
delete[] a2d;






}
