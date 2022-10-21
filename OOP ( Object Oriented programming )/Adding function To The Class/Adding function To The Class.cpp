#include<iostream>
#include<conio.h>
using namespace std ;



 class student
 {
    public :
      int id ;
      double gpa ;

        void display()
     {
        cout << id <<  "  " << gpa<<endl;
     }


 };

int main()
{
  student Alim , Atik ;

  Alim.id = 101;
  Alim.gpa = 4.50 ;
  Alim.display();

  Atik.id = 103;
  Atik.gpa = 4.73 ;
  Atik.display();

  getch();

}
