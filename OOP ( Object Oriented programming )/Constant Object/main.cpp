#include <iostream>
#include <conio.h>
#include "constantobject.h"
using namespace std;

int main()
{
    const ConstantObject ob1 ;
    ob1.display1();

    ConstantObject ob2 ;
    ob2.display2();

    getch() ;
}
