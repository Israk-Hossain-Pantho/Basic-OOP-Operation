#include<iostream>
#include<conio.h>
using namespace std ;

 class A
 {
    private :
       int id = 101 ;
       string name = "  I H Pantho "  ;

    public :
        friend class B ;
 };

 class B
 {
     public :
      void display( A ob1 )
      {
          cout << "  ID : " << ob1.id  << endl ;
          cout << ob1.name << endl ;
      }
 };

  int main()
  {
      A ob1 ;
      B ob2 ;

      ob2.display(ob1);

      getch();
  }
