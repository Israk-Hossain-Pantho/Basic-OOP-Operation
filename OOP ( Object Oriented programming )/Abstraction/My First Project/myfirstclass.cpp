#include "myfirstclass.h"
#include <iostream>

using namespace std;

MyFirstClass :: MyFirstClass()
{
    cout << "  Constractor is Called " << endl ;
}
MyFirstClass :: ~MyFirstClass()
{
    cout << "  Distractor is Called " << endl ;
}
void MyFirstClass :: display()
{
    cout << "  Display is Called " << endl ;
}
