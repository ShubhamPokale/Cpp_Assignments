//File name :
//Author :Shubham Pokale
//Email address :shubham.pokale2001@gmail.com
//Assignment no. :
//Description :
//Last changed :
#include<iostream>
#include<string.h>
using namespace std;

class CString{
private: 

char *str;     // Why Char , Why Int ?? At the end of the day its gonna store an address ony , then why the data type ?? 
int len; 

public :

CString()
   { 
      len=2; 
      str =new char[2];
      strcpy(str,"\0"); 
   }

CString(int n)
   {
      len=n;
      str = new char[n];
   }

CString(char *p)
   {
      len = strlen(p);
      str = new char[len];
      strcpy(str,p);
   }
   // Destructor : Used to free the memory allocated on heap
~CString()
   {
      delete []str;
      str =NULL; 
   }
//Copy Constructor 

CString(CString const&o)  // obj1(obj2)
   {
      len = o.len; 
      str = new char[len];
      strcpy(str,o.str);
   }




// getter function 
   void display()
      {
         cout << str; 
         cout << "\t"<< len;
      }
// Assignment operator

CString operator=(CString const &o)
   {
      delete []str;
      len =o.len;
      str= new char[len];
      strcpy(str,o.str);
      return *this; 
   }





};


int main()
{  char arr[]= "Geeksforgeeks";

   

 return 0;

}