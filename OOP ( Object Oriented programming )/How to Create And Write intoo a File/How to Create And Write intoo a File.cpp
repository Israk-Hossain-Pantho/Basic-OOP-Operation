#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
using namespace std ;


int main()
{

    string name  ;

    ofstream file ;

    file.open("student.txt",ios::out|ios::app);

    cout << "  Enter Your Name : " ;
    getline(cin,name);

    file << "Welcome " << name << endl ;

    file.close();

    cout << "  Your Data Is stored" << endl ;

    getch();

}
