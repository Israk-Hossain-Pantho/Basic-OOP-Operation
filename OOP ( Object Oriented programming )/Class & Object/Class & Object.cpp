#include<iostream>
#include<conio.h>
using namespace std ;

 class student
 {
    public :
      int id ;
      double gpa ;
 };

int main()
{
  student Alim ;

  Alim.id = 101;
  Alim.gpa = 4.50 ;


  cout<<"  Alim Id : "<<Alim.id<<endl<<"  Alim Gpa : " <<Alim.gpa<<endl;

 student Atik ;

  Atik.id = 103;
  Atik.gpa = 4.73 ;


  cout<<"\n  Atik Id : "<<Atik.id<<endl<<"  Atik Gpa : " <<Atik.gpa<<endl;
  getch();

}
