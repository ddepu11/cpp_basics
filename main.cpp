#include <functional>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include "sum.h"
#include "pointers.h"

// Preprocessor with repace all the instances of A_NUMBER in the program with
// 232323
#define A_NUMBER 232323

// Below is to avoid writing std::cout and dep::sum, now you can directly write
// function name like cout and sum.
using namespace dep;
using namespace std;

// Variables types
int generateRandomNumber() { return 405945; }

int aFunction(const int a)
{
    // a = 23; Cant reassign a value to const, coz argument a is const
    return 765;
}

struct MyStruct
{
    string name;
    int age;
    string gender;
};

// Pass by value
int sum4(int a)
{
    a = 2;
    return a + 4;
}

// Pass by reference

int sum4Dangerous(int &a)
{
    a = 3;
    return a + 4;
}

// This variable needs to be a pointer
string turnTotring(const char *myClickString) { return string(myClickString); }

// Creates a function that returns a function whose return type is int and takes
// int as an argument.
function<int(int)> createSumN(int n)
{
    // [=] whatever scope of calling func is, I am going to capture all of it.

    // If there is a large data like array and an object its not good to capture
    // them all. So instead of = we can use [n,x,y] whaterver you want to capture
    // A large array
    // Objects

    // If createSumN accept one more argument like
    // createSumN(int n, const char* str)
    // then you can use [&str]

    // We can also specify return type of the function ex.
    // return [=](int x)-> void { return {} };

    return [=](int x) -> int
    { return x + n; };
}

int main()
{
    // std::cout << A_NUMBER;

    // std::cout << dep::sum(12, 4);

    // cout << sum(12, 6);

    // Variables types
    // auto is like any
    // auto newVar = 23;
    // auto a = generateRandomNumber();

    // const int b = 32;
    // b = 45 // Cant reassign a value to const
    // aFunction(b);

    // Vectors
    // Its like an array
    // vector<int> myVector;

    // myVector.push_back(2);
    // myVector.push_back(4);
    // myVector.push_back (6);

    // Map(key/value pair)
    // map<string, string> myMap = map<string, string>();

    // myMap["Hello"] = "World";
    // myMap["Hola"] = "Amigo";

    // cout << myMap["Hola"] << endl;

    // Struct

    // MyStruct myStruct = MyStruct{"Mohan Kumar", 23, "MALE"};

    // cout << myStruct.name << endl;

    // Pointers
    // int age = 25;
    // int *pAge = &age;

    // cout << "My age is: " << pAge << endl;
    // Pass by value
    // cout << "Sum: " << sum4(age) << endl;
    // Here the orignal value of age is still 25 enev though we have changes it in
    // the sum4 function.
    // cout << "Age: " << age << endl;

    // Pass by reference
    // cout << "Sum: " << sum4Dangerous(age) << endl;
    // We have changed the actual value of age in the sum4Dangerous function.
    // cout << "Age: " << age << endl;

    // Strings
    // string myStr = "Mohan";

    // string combinedStr = myStr + " Kumar";

    // cout << combinedStr << endl;

    // C like string
    // const char *cLike = combinedStr.c_str();

    // cout << cLike << endl;

    // string newStr = cLike;

    // cout << newStr << endl;

    // string myStr = turnTotring("Hello World!").c_str();

    // cout << myStr  << endl;

    // Lambda Functions
    // function<int(int)> sum4 = createSumN(4);
    // function<int(int)> sum5 = createSumN(5);

    // cout << sum4(3) << endl;
    // cout << sum5(6) << endl;

    // Bitwise Operation
    // int a = 1; // 00000001
    // int b = a << 1; // 00000010 bit hase been moved by one position to the
    // left.

    // int b = a >> 1; // 00000001 bit hase been moved by one position to the
    // right.

    // int a = 1; // 00000001
    // int b = 2; // 00000010

    // int c = a | b; // 00000011

    // cout << c << endl;

    // Can be used as an ENUM / FLAG /Mask
    // int MANAGE_MONEY = 1;  // 00000001
    // int EDIT_CALENDAR = 2; // 00000010

    // Mask
    // Each individual bit adopts a meaning
    // int userPermission = MANAGE_MONEY | EDIT_CALENDAR; // 00000011

    // cout << userPermission << endl;

    // More pointers examples
    pointerExamples();

    return 0;
}
