#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
using namespace std ;


int main()
{

    string name ;
    int age ;

    ofstream file ;

    file.open("student Details.txt",ios::out|ios::app);

    cout << "  Enter Your Name : " ;
    getline(cin,name);

    cout << "  Enter Your Name : " ;
    cin >> age ;

    file << " Name & Age -> " << name << " \t " << age << endl ;
    cin.ignore();

    file.close();

    cout << "  Your Data Is stored" << endl ;

    getch();

}

