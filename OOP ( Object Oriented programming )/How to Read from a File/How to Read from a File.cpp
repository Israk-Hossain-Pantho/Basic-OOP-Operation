#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std ;

int main()
{
   string line ;

   ifstream file("How to Read from a File.txt") ;

   while(getline(file,line))
   {
       cout << line << endl ;
   }

   file.close();

   getch();

}
