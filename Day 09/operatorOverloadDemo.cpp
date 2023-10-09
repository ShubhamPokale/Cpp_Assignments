#include<iostream>
using namespace std;

class mycomplex{
 int real, imag;

 public:
  mycomplex()       //default constructor
  {
     cout<<"\n Default constructor is called....";
     real = 0 ;
     imag = 0;
  }

  mycomplex(int r)
  {
     cout<<"\n single parameter constructor is called....";
     real = r;
     imag = r;
  }

  ~mycomplex()
  {
    cout<<"\n Destructor is called....";
  }

  mycomplex(int r, int i)
  {
     cout<<"\n two parameter constructor is called...";
     real = r;
     imag = i;
  }

  void setReal(int r)
  {
      real = r;
  }
  void setImag(int r)
  {
     imag = r;
  }
  void display()
  {
     cout<<"\n\n\n"<<real<<" + "<<imag<<"i\n";
  }

  mycomplex operator +(mycomplex c)//mycomplex c = c2
  {
    mycomplex res;  //default constructor
    res.real = real + c.real;
    res.imag = imag + c.imag;

    return res;
  }

  mycomplex operator +(int r)//mycomplex c = c2
  {
    mycomplex res;  //default constructor
    res.real = real + r;
    res.imag = imag + r;

    return res;
  }

  mycomplex operator -(mycomplex c)
  {
    mycomplex res;
    res.real = abs(real - c.real);
    res.imag = abs(imag - c.imag);

    return res;
  }


};


int main()
{
   mycomplex c1(4), c2(2,6), c3;
   //c1.setReal(4);
   //c1.setImag(5);
   //c2.setReal(2);
   //c2.setImag(6);

   c1.display();
   c2.display();


   c3 = c1 + c2;    //c1.operator+(c2);
   c3.display();

   c3 = c1 + 2;     //c1.operator(2)
   c3.display();

   c3 = c1 - c2;
   c3.display();


   cout<<"\n\n\n\n The end...";
   return 0;
}
