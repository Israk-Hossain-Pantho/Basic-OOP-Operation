#include<iostream>
#include<conio.h>
using namespace std ;

class Student
{
    public :
    const int admissionFee ;
    const int examFee ;
    int id;

    Student( int x , int y , int z )
    :  admissionFee(x) , examFee(y)
    {
        cout << "  Admission Fee : " << admissionFee << endl ;
        cout << "  Exam Fee : " << examFee << endl ;
        id = z ;
        cout << "  ID : " << id << endl ;
    }
};

int main()
{

   Student s1(15000,3000,101);


  getch();

}
