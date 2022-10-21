#include<iostream>
#include<conio.h>
using namespace std ;

 class MobileUser
 {
    public :
        void call()
        {
            cout << "  Hello " << endl ;
        }
        virtual void sendMessage () = 0 ;

 };

 class Rahim : public MobileUser
 {
     public :
      void sendMessage ()
      {
          cout << "  This is Rahim" << endl ;
      }
 };

 class Karim : public MobileUser
 {
     public :
      void sendMessage ()
      {
          cout << "  This is Karim" << endl ;
      }
 };

int main()
{
   MobileUser *m ;
   Rahim r ;
   Karim k ;

   m -> call();

   m = &r ;
   m -> sendMessage() ;

   m = &k ;
   m -> sendMessage() ;

   getch();

}
