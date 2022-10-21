#include<iostream>
#include<conio.h>
using namespace std ;



 class student
 {
    public :
        int id  ;
        double gpa ;

     void setValue( int x , double y)
      {
          id = x ;
          gpa = y ;
      }

     void display()
      {
        cout << id <<  "  " << gpa<<endl;
      }

 };

int main()
{
  student Alim , Atik ;

  Alim.setValue(101,4.50);
  Alim.display();

  Atik.setValue(102,4.75);
  Atik.display();

  getch();

}
