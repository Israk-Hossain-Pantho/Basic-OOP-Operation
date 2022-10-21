#include "constantobject.h"
#include <iostream>
using namespace std;

void ConstantObject :: display1() const
{
    cout << "  Display Constant Object " << endl ;
}
void ConstantObject :: display2()
{
    cout << "  Display Non-Constant Object " << endl ;
}
