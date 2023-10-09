#include<iostream>
using namespace std;
int num;
class my_complex {
  int real;         //class scope
  int imag;
  public:
      void setReal(int r)
      {
                     //r is local to function
          real = r;
      }
      void setImag(int i)
      {
          imag = i;
          num = 200;
      }
      void display()
      {
          int num = 15;
          cout<<real<<" + "<<imag<<"i \n";
         cout<<"\n num = "<<::num;
      }
};


int main()
{
    my_complex obj;
    num = 20;



    obj.setReal(5);
    obj.setImag(7);

    obj.display();

    return 0;

}
