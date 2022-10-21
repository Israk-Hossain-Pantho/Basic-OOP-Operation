#include<iostream>
#include<conio.h>
using namespace std ;

class Person
{
    public :
        string name ;
        int id ;

    void display1 ()
    {
        cout << "  Name : " << name << endl ;
        cout << "  ID   : " << id << endl ;

    }

};
class Student : public Person
{
    public :
        int age ;

    void display2 ()
    {
        display1();
        cout << "  Age  : " << age << endl ;
    }

};


int main()
{
   Student s1 ;

   s1.name = "I H Pantho" ;
   s1.id = 101 ;
   s1.age = 21 ;
   s1.display2();


   getch();

}
