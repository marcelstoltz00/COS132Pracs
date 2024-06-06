#include <iostream>
#include <string>
using namespace std;
void printConstRef(const int &num)
{
    // num++; // Uncommenting this line will cause a compile error // because ‘num‘ is const.
    cout << "The number is: " << num << endl;
}
void printConstPointer(const int **ptr)
{
    // **ptr = 10; // Uncommenting this line will cause a compile
    // error because ‘**ptr‘ is const. cout << ”Pointer points to: ” << **ptr << endl;
}
const int &getConstRef()
{
    static int value = 10;
    return value;
}
void printConstPointerToPointer(const int ****ptrptr)
{
    // ****ptrptr = 10; // Uncommenting this line will cause a
    // compile error because ‘****ptrptr‘ is const. **ptrptr = NULL; // Legal since the int **** is const,
    // not the int **
    cout << "Pointer to pointer points to: " << ****ptrptr << endl;
}
void increment(int **const ptr)
{
    (**ptr)++;
    cout << "Incremented value: " << **ptr << endl;
}
void givepointeraddress(int &var)
{
    int *ptr = &var;

    cout << *ptr << endl;
    cout << var << endl;

    cout << &var << endl;
    cout << ptr << endl;
}
void changebyreference(int &var)
{

    var = 11;
}
void changebypntr(int &var)

{
    int *ptr = &var;

    cout << *ptr << endl;

    cout << var << endl;

    cout << "change" << endl;

    *ptr = 11;
    cout << *ptr << endl;
    var = 11;
    cout << var << endl;
}
void func1(int &m, int &h){
if (m < h) h *= m++ ;
else m -= --h*h ;}

void doubleVal(int val)
{
  //  *val *= 2;
}
int fis(){
  //  int *pint = nullptr;

   // new pint;

    int *pint = nullptr;

    pint = new int;

    if (pint == nullptr)

        *pint = 100;

    else

        cout << "Memory allocation error\n";

    return 0;
}



int main()
{
int x = 2, y = 2, z = 1;
func1(x, y);
 //   int x = 0, y = 1, z = 1;
//func1(x, y, z);
cout<<x<<y<<z<<endl;
    // Step 1: Create a simple integer variable
    int value = 42;

    // Step 2: Create a pointer to the integer variable
    int *ptr = &value;
    cout << ptr << endl;
    // Step 3: Create a pointer to the pointer-to-integer
    int **ptr1 = &ptr;

    char vAR[] = "hello";
    char *ptrS = &vAR[0];
    cout << ptrS << endl;

    cout << *ptrS << endl;
    ptrS++;
    cout << ptrS << endl;

    cout << *ptrS << endl;

    // Output the values step by step
    // std::cout << "value: " << value << std::endl;           // 42
    //   std::cout << "*ptr: " << ****ptr3 << std::endl;    // 42

   //  Output the addresses step by step
      std::cout << "&value: " << &value << std::endl;
       std::cout << "address of ptr: " << &ptr << std::endl;      // Address of value
     std::cout << "address of ptr1: " << &ptr1 << std::endl;       // Address of value
    std::cout << "address of ptr2: " << &ptr2 << std::endl;
    std::cout << "address of ptr3: " << &ptr3 << std::endl;

    // std::cout << "address of *ptr: " << &*ptr1 << std::endl;      // Address of value

    return 0;
}