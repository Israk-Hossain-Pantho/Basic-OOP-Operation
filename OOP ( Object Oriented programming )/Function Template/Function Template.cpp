#include<iostream>
#include<conio.h>
using namespace std ;

template < class Mytemplate >
Mytemplate add ( Mytemplate a , Mytemplate b )
{
    return a + b ;
}

int main()
{
   cout << "  Sum Of Integer Number : " << add(10,20) << endl ;
   cout << "  Sum Of Double Number  : " << add(10.5,20.3) << endl ;


   getch();

}
