#include<iostream>
#include<conio.h>
using namespace std ;

class Person
{
   public :
       virtual void display()
       {
           cout << "  I am Person " << endl;
       }

};

class Student : public Person
{
     public :
       void display()
       {
           cout << "  I am Student " << endl;
       }

};
class Teacher : public Person
{
     public :
       void display()
       {
           cout << "  I am Teacher " << endl;
       }

};

int main()
{

  Person *p ;
  Student s ;
  Teacher t ;

  p = &s ;
  p -> display();

  p = &t ;
  p -> display();


  getch();

}
