#include "AdditionSubtraction.h"  // Header file of a class to be used
//#include "classTwo.h"  // Another class if needed
#include <iostream>

using namespace std;

int main()
{
    // compiler knows the types
    // so no errors compiling this.
    AdditionSubtraction c1(1,2);  // using constructor to initialize field1 and field2
    AdditionSubtraction c2(6,2);  // using constructor to initialize field1 and field2
    c1.Addition();
    c2.Subtraction();
    cout << "Addition of 1 + 2 : " << c1.Addition() << endl;
    cout << "Subtraction of 6 - 2 : " << c2.Subtraction() << endl;
//    classTwo c2;
}
