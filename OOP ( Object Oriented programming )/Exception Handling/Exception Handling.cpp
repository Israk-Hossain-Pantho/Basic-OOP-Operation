#include<iostream>
#include<conio.h>
using namespace std ;

int main()
{
   while(1)
    {

      try
       {

        int num1 , num2 ;

        cout << "  Enter 1st Number : " ;
        cin >> num1 ;
        cout << "  Enter 2nd Number : " ;
        cin >> num2 ;

        if( num2 == 0)
        {
            throw 1 ;
        }

        double result = (double) num1 / num2 ;
        cout << "  Result : " << result << endl ;

       }
       catch ( ... )
       {
           cout << "  Divide by  Zero is not Possible " << endl ;
           cout << "  Please Try Again " << endl ;
       }

    }

        getch();

}
