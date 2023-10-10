//File name :
//Author :Shubham Pokale
//Email address :shubham.pokale2001@gmail.com
//Assignment no. :
//Description :



// 1. Define following class and add functionalities

// Class A
// {
//      int data;
// };

// the above given is just a suggestion for class definition. Complete the class and function definitions so that you can do following calculations on objects of that class(write constructors and destructors)

// Assume.
// A a1,a2,a3;   //objects of class A
 
// a1=a2;
// a1=a2*a3;
// a1=10;

//Last changed :


#include<iostream>
using namespace std;

class A
    {
        protected :
            int a;
            float b;
            
        public : 
        A():a(0),b(0.0){}
        A(int a, float b):a(a),b(b){}

    };
int main()
{
 return 0;
}