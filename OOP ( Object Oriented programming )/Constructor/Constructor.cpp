#include<iostream>
#include<conio.h>
using namespace std ;



 class student
 {
     public :
        int id  ;
        double gpa ;

     void display()
      {
        cout << id <<  "  " << gpa<<endl;
      }
     student(int x , double y)
     {
         id = x ;
         gpa = y ;
     }

 };

int main()
{
  student Alim(101,4.50);
  Alim.display();

  student Atik(102,4.75);
  Atik.display();

  getch();

}
