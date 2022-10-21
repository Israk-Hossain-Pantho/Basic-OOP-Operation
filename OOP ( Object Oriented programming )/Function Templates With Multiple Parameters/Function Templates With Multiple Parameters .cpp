#include<iostream>
#include<conio.h>
using namespace std ;

template < class Mytemplate1 ,class Mytemplate2 >
Mytemplate1 add ( Mytemplate1 a , Mytemplate2 b )
{
    return a + b ;
}

int main()
{
   cout << add(10,20) << endl ;
   cout << add(10.5,20.2) << endl ;
   cout << add(10.5,20) << endl ;
   cout << add(10,20.5) << endl ;


   getch();

}

