#include <iostream>
using namespace std;

void processArguments(const char *args[], size_t count)
{
    for (size_t i = 0; i < count; i++)
    {
        cout << args[i] << endl;
    }
}

void pointerExamples()
{

    // int a = 10;

    // int *pToA = &a;
    // int **pToAP = &pToA;

    // cout << pToA << endl;
    // cout << pToAP << endl;

    // cout << *pToA << endl;
    // cout << **pToAP << endl;

    // Array
    const char *args[3] = {"a", "b2", "c34"};

    // cout << args << endl;

    // cout << *args << endl;    // a
    // cout << *args[1] << endl; // b
    // cout << *args[2] << endl; // c

    // cout << endl;

    // cout << args[0] << endl; // a
    // cout << args[1] << endl; // b2
    // cout << args[2] << endl; // c34

    // cout << endl;

    // // 24 -> (64 bit PC 8 bytes) 8 + 8 + 8 = 24
    // cout << sizeof args << endl;

    // // a takes 8 bytes
    // cout << sizeof *args << endl;

    // cout << endl;

    // // Size of array 24/8 = 3
    // cout << sizeof args / sizeof *args << endl;

    // size_t adjusts  to your architecture of your system.
    size_t count = sizeof args / sizeof *args;

    processArguments(args, count);

    cout << count << endl;
}
