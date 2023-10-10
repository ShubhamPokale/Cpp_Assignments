//File name :
//Author :Shubham Pokale
//Email address :shubham.pokale2001@gmail.com
//Assignment no. :
//Description :
//Last changed :
#include<iostream>
using namespace std;

class Complex{
private: int real;
int imag;

public:
Complex():real(0),imag(0){}

Complex(int r,int i):real(r),imag(i){}

Complex(int r):real(r),imag(0){}

void display()
    {
        cout << "\nThe Complex number is (" << real << " + " << imag << "i)";
    }

// Operator Overloading 

Complex operator+(Complex const &obj2)
    {
        Complex res; 
        res.real = real + obj2.real;
        res.imag = imag + obj2.imag;
        return res; 
    }




Complex operator-(Complex const &obj2)
    {
        Complex res; 
        res.real = real - obj2.real;
        res.imag = imag - obj2.imag;
        return res; 
    }


bool operator>(Complex const &obj2)
    {
        if(real > obj2.real && imag > obj2.imag)
            {
                return true ;
            }
        else return false;


   }

Complex operator*(Complex const &obj2)
    {
        Complex res;
        res.real = real*obj2.real;
        res.imag = imag*obj2.imag;
        return res;

    }


};



int main()
{
    bool x; 
    Complex num1;
    Complex num2(4,5);
    Complex num4(6,5); 
    Complex num3(5);
    Complex num7;
    Complex num8;
    Complex num9;
    num1.display();
    num2.display();
    num3.display();
    num7.display();
    
   // num1 = num2 + num4;   num2.add(num3);
    //Overloading + operaetor
        // num   : real + imag
        // num 2 : 4 + 5i
        // num4  : 6 + 5i
        // num1  : 10+ 10i
        // + operator overloaded successfully
    num1 = num2 + num4;
    //Overloading - operator
    // num7= num2 - num4 ;

    // num : real  imag
    // num2 : 4  5
    // num4 : 6  5
    // num7 : -2  0
    // - Operator Overloaded
    num7 = num2 - num4;
    // What if I want to get the absolute value of the subtraction ?, num7 = abs(num2 - num4);
    //         num2.subtract(num4)

   num1.display();
   num7.display();

// Overloading > operator
//     num8 = num2 > num4 ;
     x=(num2 > num4);
//     num2 > num4 ; num2.greaterth enoperator(num4)
//     if num2 > num4 return 1 to num8 else return 0
//     num : real  imag
//     num2 : 4  5
//     num4 : 6  5
//     num7 : 1
        cout << "> overloading " <<x ;


    //Overloading * operaetor
        // num   : real + imag
        // num2 : 4 + 5i
        // num4  : 6 + 5i
        // num9  : 24+ 25i


    num9 = num2*num4;
    num9.display();
    // num2.multiply(num4)
    // Multiplication Operator overloaded successfully



    return 0;
}